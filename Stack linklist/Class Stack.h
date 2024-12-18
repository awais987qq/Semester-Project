#include"Node.h"
class Stack
{
private:

	Node* top;

public:

	Stack();

	void push(int);

	int pop();

	bool isEmpty();

	//int getTop();

	void print();
	
};