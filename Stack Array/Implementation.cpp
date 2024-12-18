#include"Stack.h"
#include<iostream>
using namespace std;

Stack::Stack()
{
	size=20;
	storage_capacity=new int[size];
	top=-1;
}

bool Stack::isEmpty()
{
	if(top==-1)
	{
		return true;
	}
	else
		return false;
}

bool Stack::isFull()
{
	if(top==size-1)
	{
		return true;
	}
	else 
		return false;
}

void Stack::push(int value)
{
	if(isFull())
	{
		cout<<"Not enough space"<<endl;
		return;
	}
	else
	{
		top=top+1;
		storage_capacity[top]=value;
		cout<<"Pushed"<<endl;
	}
}

void Stack::pop()
{
	if(isEmpty())
	{
		cout<<"Stack is empty"<<endl;
		return;
	}
	else
	{
		top=top-1;
		cout<<"Popped"<<endl;
	}
}
void Stack::print()
{
	for(int i=0; i<=top;i++)
	{

		cout<<storage_capacity[i]<<endl;
	}
}