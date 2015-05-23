//THOBANI MABASO(212535063)



#include <cstdlib>
#include <iostream>

using namespace std;


template <class T>
class Stack
{


public:
	// Constructor
	Stack()
	{
		top = 0;               //Top of the stack
		//  bottom = 5;            // Maximum of 5 values in stack                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
	}
	// Destructor
	//~Stack();
	// Stack operations
	void push(T);
	void pop(T &);
	void peek(T &);
	bool isEmpty();
	bool isFull();


private:
	// Structure for stack nodes
	struct StackNode
	{
		T value;        // Value in the node
		StackNode *next;  // Pointer to the next node
	};

	StackNode *top;      // Pointer to the stack top
	StackNode *bottom;   // Pointer to the bottom of the stack
};


template <class T>
bool Stack<T>::isEmpty()                   //Checks if stack is empty
{
	bool status;                            //status report :) get it? no ? :(

	if (!top)
		status = true;
	else
		status = false;

	return status;
}

template <class T>                         //Checks if stack is full
bool Stack<T>::isFull()
{
	bool status;

	if (top)
		status = true;
	else
		status = false;

	return status;
}

template < class T >
void Stack<T>::push(T num)
{
	StackNode *newNode; // Pointer to a new node

	// Allocate a new node and store num there.
	newNode = new StackNode;
	newNode->value = num;

	//First check if the stack is full and print an error if it's full
	if (isFull())
	{
		cout << "Error, Stack is full!!!!" << endl;
	}
	else if (isEmpty())                             // If there are no nodes in the list, make newNode the first node.
	{
		top = newNode;
		newNode->next = 0;
	}
	else  // Otherwise, insert NewNode before top.
	{
		newNode->next = top;
		top = newNode;
	}
}

template < class T >
void Stack<T>::pop(T &num)
{
	StackNode *temp; // Temporary pointer

	// First make sure the stack isn't empty.
	if (isEmpty())
	{
		cout << "The stack is empty!!!!" << endl;
	}
	else  // pop value off top of stack
	{
		num = top->value;
		temp = top->next;
		delete top;
	}
}

template < class T >
void Stack<T>::peek(T &num)
{
	StackNode *temp;    // Temporary pointer

	// First make sure the stack isn't empty.
	if (isEmpty())
	{
		cout << "The stack is empty.\n";
	}
	else  // Return the value at the top of the stack without modifying the stack
	{
		temp = top;
	}
}



int main()
{
	Stack  <int> test;
	test.push(4);


	system("PAUSE");
	return 0;
}