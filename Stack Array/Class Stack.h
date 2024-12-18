class Stack
{

private:
	int *storage_capacity;
	int size;
	int top;

public:
	Stack();
	void push(int);
	void pop();
	bool isEmpty();
	bool isFull();
	int getTop();
	void print();
	
};