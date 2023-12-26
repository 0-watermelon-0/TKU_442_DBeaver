#include "list.h"
#include <iostream>

DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr) {}

DoublyLinkedList::~DoublyLinkedList() {
    // destructor implementation (реализация деструктора)
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
    // implementation of the add element function (добавления элемента)
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
    // implementation of the element removal function (удаления элемента)
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
    // implementing a list sorting function (сортировки списка)
    bool swapped;
    Node* ptr1;
    Node* lptr = nullptr;

    // Checking if the list is empty (пуст ли список)
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
    // implementation of list function (вывода списка)
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
    // list output (вывода списка)
    list.displayList(); 
    // sort the list (сортировки списка)
    list.sortList(); 
    list.displayList();
    // deleting an element (удаления элемента)
    list.deleteNode(62); 
    list.displayList();

    return 0;
}
