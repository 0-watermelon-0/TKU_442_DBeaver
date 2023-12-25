#include "list.h"
#include <iostream>

DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr) {}

DoublyLinkedList::~DoublyLinkedList() {
    // реализация деструктора
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
    tail = nullptr;
}

void DoublyLinkedList::insertNode(int data) {
    // реализация функции добавления элемента
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        newNode->prev = nullptr;
        head = newNode;
        tail = newNode;
    }
    else {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

void DoublyLinkedList::deleteNode(int data) {
    // реализация функции удаления элемента
    Node* current = head;
    while (current != nullptr) {
        if (current->data == data) {
            if (current == head) {
                head = current->next;
                if (head != nullptr) {
                    head->prev = nullptr;
                }
                else {
                    tail = nullptr;
                }
            }
            else if (current == tail) {
                tail = current->prev;
                tail->next = nullptr;
            }
            else {
                current->prev->next = current->next;
                current->next->prev = current->prev;
            }
            delete current;
            return;
        }
        current = current->next;
    }
}

void DoublyLinkedList::sortList() {
    // реализация функции сортировки списка
    bool swapped;
    Node* ptr1;
    Node* lptr = nullptr;

    // Проверяем, пуст ли список
    if (head == nullptr)
        return;

    do {
        swapped = false;
        ptr1 = head;

        while (ptr1->next != lptr) {
            if (ptr1->data < ptr1->next->data) {
                int temp = ptr1->data;
                ptr1->data = ptr1->next->data;
                ptr1->next->data = temp;
                swapped = true;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}

void DoublyLinkedList::displayList() {
    // реализация функции вывода списка
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    DoublyLinkedList list;
    list.insertNode(53); 
    list.insertNode(23);
    list.insertNode(62);
    list.insertNode(17);
    list.insertNode(36);

    list.displayList(); 

    list.sortList(); 
    list.displayList();

    list.deleteNode(62); // пример вызова функции удаления элемента
    list.displayList();

    return 0;
}
