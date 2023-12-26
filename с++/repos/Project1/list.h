
struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    // add element function  (добавления элемента)
    void insertNode(int data); 

    // element removal function  (удаления элемента)
    void deleteNode(int data);

    // list sort function (сортировки списка)
    void sortList(); 

    // list function (вывода списка)
    void displayList();

private:
    Node* head;
    Node* tail;
};


