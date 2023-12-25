#ifndef LIST_H
#define LIST_H

/*
    @brief Create array.
    @param prev link to previous element
    @param next link to next element
    @param data information
    */
struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:

    /*
    @brief Create array.
    @param prev link to previous element
    @param next link to next element
    @param data information
    @param head start of the list
    @param tail end of list
    */
    DoublyLinkedList();
    ~DoublyLinkedList();
    
    
    /*
   @brief adding an element
   @param prev link to previous element
   @param next link to next element
   @param data information
   @param head start of the list
   @param tail end of list
   */
    void insertNode(int data); // функция добавления элемента
    
    /*
  @brief deleting an element
  @param prev link to previous element
  @param next link to next element
  @param data information
  @param head start of the list
  @param tail end of list
  */
    void deleteNode(int data); // функция удаления элемента
    
    /*
    @brief list sorting
    */
    void sortList(); // функция сортировки списка
    
    /*
    @brief list output
    */
    void displayList(); // функция вывода списка

    /*
 @param head start of the list
 @param tail end of list
 */
private:
    Node* head;
    Node* tail;
};

#endif
