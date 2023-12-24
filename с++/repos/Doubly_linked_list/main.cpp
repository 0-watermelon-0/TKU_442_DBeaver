#include <iostream>
#include "double_linked_list.h"

int main()
{
    DoublyLinkedList* list = new DoublyLinkedList();

    list->addNode(1);
    list->addNode(2);
    list->addNode(3);
    list->addNode(4);
    list->addNode(5);

    list->printElements(); // Output: 1 2 3 4 5

    list->deleteNode(3);

    list->printElements(); // Output: 1 2 4 5

    list->deleteRoot();

    list->printElements(); // Output: 2 4 5

    list->printReverse(); // Output: 5 4 2

    list->swapNodes(2, 5);

    list->printElements(); // Output: 5 4 2


}


