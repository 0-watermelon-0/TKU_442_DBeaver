#include "node.h"


class DoublyLinkedList {
private:
    Node* root;

public:
    DoublyLinkedList() {
        root = nullptr;
    }

    void initializeList() {
        root = nullptr;
    }

    void addNode(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->prev = nullptr;
        newNode->next = nullptr;

        if (root == nullptr) {
            root = newNode;
        }
        else {
            Node* temp = root;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void deleteNode(int value) {
        Node* temp = root;

        while (temp != nullptr) {
            if (temp->data == value) {
                if (temp->prev != nullptr) {
                    temp->prev->next = temp->next;
                }
                else {
                    root = temp->next;
                }
                if (temp->next != nullptr) {
                    temp->next->prev = temp->prev;
                }
                delete temp;
                return;
            }
            temp = temp->next;
        }
    }

    void deleteRoot() {
        if (root == nullptr) {
            return;
        }
        Node* temp = root;
        root = root->next;
        if (root != nullptr) {
            root->prev = nullptr;
        }
        delete temp;
    }

    void printElements() {
        Node* temp = root;

        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }

    void printReverse() {
        Node* temp = root;

        while (temp->next != nullptr) {
            temp = temp->next;
        }

        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->prev;
        }
        std::cout << std::endl;
    }

    void swapNodes(int value1, int value2) {
        Node* temp1 = nullptr;
        Node* temp2 = nullptr;
        Node* temp = root;

        while (temp != nullptr) {
            if (temp->data == value1) {
                temp1 = temp;
            }
            if (temp->data == value2) {
                temp2 = temp;
            }
            temp = temp->next;
        }

        if (temp1 != nullptr && temp2 != nullptr) {
            int tempData = temp1->data;
            temp1->data = temp2->data;
            temp2->data = tempData;
        }
    }
};