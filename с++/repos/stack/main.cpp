#include <iostream>
#include "stack/Stack.h"

int main() 
{
	Stack<int>* stack = new Stack<int>();
	std::cout << "Is stack empty: " << stack->is_empty();
	Node<int>* node = new Node<int>(5);
	stack->push(5);
	stack->push(6);
	stack->push(7);
	stack->push(2);
	stack->push(9);
	std::cout << "\nValues: " << stack->show();
	std::cout << "\nIs stack empty: " << stack->is_empty();
	stack->pop(); 
	std::cout << "\nValues(after pop): " << stack->show();

	return 0;
}