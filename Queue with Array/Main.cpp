#include<iostream>
#include<conio.h>
#include"Queue.h"
using namespace std;
int main()
{
	Queue Q1;
	Q1.enQueue(7);
	Q1.enQueue(16);
	Q1.enQueue(12);
	Q1.enQueue(6);
	Q1.enQueue(18);
	//Q1.enQueue(23);
	Q1.print();
	Q1.deQueue();
	Q1.deQueue();
	//Q1.deQueue();
	//Q1.deQueue();
	cout<<endl<<endl;
	Q1.print();
	Q1.enQueue(55);
//	cout<<endl<<endl;
	Q1.print();
	getch();
	return 0;

}