#pragma once  
#include <string> 
#include <sstream> 
#include <vector> 

using namespace std;

/**
 * @brief Элемент стека
 * @tparam T тип данных
*/
template <typename T>
struct Node {
    /**
     * @brief Значение
    */
    T data;
    /**
     * @brief Указатель на предыдущий элемент стека
    */
    Node<T>* prev;

    /**
     * @brief Параметризированный конструктор
     * @param data данные объекта
    */
    Node(const T& data);
};

/**
 * @brief Класс Stack.
 * @tparam T тип данных.
*/
template <typename T>
class Stack {
private:
    
    /**
     * @brief Указатель на вершину стека
    */
    Node<T>* head;
    
    /**
     * @brief Размер стека.
    */
    size_t size;
    
    /**
     * @brief Получение значений стека (с вершины). Нужен для копирования
    */
    vector<T> create_values() const noexcept;
public:
    
    /**
     * @brief Конструктор по умолчанию.
    */
    Stack();
    
    /**
     * @brief Конструктор копирования.
     * @param obj объект Stack.
    */
    Stack(const Stack<T>& obj);
    
    /**
     * @brief Конструктор перемещения.
     * @param moved перемещаемый объект Stack.
    */
    Stack(Stack<T>&& moved) noexcept;
    
    /**
     * @brief Оператор копирования.
     * @param obj объект Stack.
    */
    Stack<T>& operator=(const Stack<T>& obj);
    
    /**
     * @brief Оператор перемещения.
     * @param moved объект Stack.
    */
    Stack<T>& operator=(Stack<T>&& moved) noexcept;

    /**
     * @brief Деструктор.
    */
    ~Stack();

    /**
     * @brief Добавление элемента в стек.
     * @param item добавляемый объект.
    */
    void push(const T& item);

    /**
     * @brief Вывод стека на экран.
    */
    string show() const noexcept;

    /**
     * @brief Проверка наличия элементов в стеке.
    */
    bool is_empty() const noexcept;
    
    /**
     * @brief Удаление последнего добавленного элемента.
    */
    void pop();

    /**
     * @brief Получение вершины стека.
    */
    T top() const;

    /**
     * @brief Получение размера стека.
    */
    size_t get_size() const noexcept;
};