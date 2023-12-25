
struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    // функция добавления элемента
    void insertNode(int data); 

    // функция удаления элемента
    void deleteNode(int data);

    // функция сортировки списка
    void sortList(); 

    // функция вывода списка
    void displayList();

private:
    Node* head;
    Node* tail;
};


