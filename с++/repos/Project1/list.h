
#ifndef LIST_H
#define LIST_H

struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void insertNode(int data); // функция добавления элемента
    void deleteNode(int data); // функция удаления элемента
    void sortList(); // функция сортировки списка
    void displayList(); // функция вывода списка

private:
    Node* head;
    Node* tail;
};

#endif
