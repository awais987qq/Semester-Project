#include"Stack.h"
#include<iostream>
using namespace std;

Stack::Stack()

	  {
		  top=NULL;
	  }
	void Stack::push (int value)
	{
		if(isEmpty())

		{
		Node *temp = new Node(value) ;
		top = temp;
		}

		else

		{
		Node *temp = new Node(value);
		temp->setNext(top);
		top = temp;
		}
	}

	int Stack::pop()

	{
		Node* temp = top;
		top=top->getNext();
		int value = temp->getValue();
		delete temp;
		return value;
	}
	bool Stack::isEmpty()
	{
		if(top == NULL)

		{
			return true;
		}

		else

		{
			return false;
		}
	}

     //	int Stack::getTop()
     //	{
      //}

	void Stack::print()

	{
		Node*temp=top;
		while(temp! = NULL)

		{
			cout<<temp->getData()<<endl;
			temp = temp->getNext();
		}
	}