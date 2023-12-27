#include <iostream>
#include <string>
#include <sstream>
#include "Stack.h"

using namespace std;

template<typename T>
inline Node<T>::Node(const T& data) : data{ data }, prev{ nullptr } {}

template<typename T>
vector<T> Stack<T>::create_values() const noexcept {
	vector<T> values;
	Node<T>* p = this->head;

	while (p != nullptr) {
		values.push_back(p->data);
		p = p->prev;
	}

	return values;
}

template<typename T>
Stack<T>::Stack() : head{ nullptr }, size{ 0 } {}

template<typename T>
Stack<T>::Stack(const Stack<T>& obj) : Stack() {
	if (!obj.is_empty()) {
		vector<T> values = obj.create_values();
		for (int i = values.size() - 1; i >= 0; --i) {
			this->push(values[i]);
		}
	}
}

template<typename T>
Stack<T>::Stack(Stack<T>&& moved) noexcept : Stack() {
	*this = move(moved);
}

template<typename T>
Stack<T>& Stack<T>::operator=(const Stack<T>& obj) {
	if (this != &obj) {
		Stack<T> t{ obj };
		*this = move(t);
	}
	return *this;
}

template<typename T>
Stack<T>& Stack<T>::operator=(Stack<T>&& moved) noexcept {
	if (this != &moved) {
		swap(this->head, moved.head);
		swap(this->size, moved.size);
	}
	return *this;
}

template<typename T>
Stack<T>::~Stack() {
	while (!this->is_empty()) {
		this->pop();
	}
}

template<typename T>
void Stack<T>::push(const T& item) {
	Node<T>* node = new Node<T>{ item };

	Node<T>* prev = this->head;
	node->prev = prev;
	this->head = node;

	++this->size;
}

template<typename T>
string Stack<T>::show() const noexcept {
	ostringstream buffer;

	if (this->is_empty()) {
		buffer << "Пустой стек\n";
	}
	else {
		buffer << "{ ";
		vector<T> values = this->create_values();
		for (int i = 0; i < values.size(); ++i) {
			buffer << values[i] << ' ';
		}
		buffer << "}";
	}
	return buffer.str();
}

template<typename T>
bool Stack<T>::is_empty() const noexcept {
	return size == 0;
}

template<typename T>
void Stack<T>::pop() {
	if (this->is_empty()) {
		throw logic_error("Стек уже пуст");
	}

	T item = this->head->data;
	Node<T>* t = this->head;
	this->head = this->head->prev;
	delete t;
	--this->size;
}

template<typename T>
T Stack<T>::top() const {
	if (this->is_empty()) {
		throw logic_error("Стек пуст");
	}

	return this->head->data;
}

template<typename T>
size_t Stack<T>::get_size() const noexcept {
	return this->size;
}

template Node<int>;
template Node<string>;

template Stack<int>;
template Stack<string>;