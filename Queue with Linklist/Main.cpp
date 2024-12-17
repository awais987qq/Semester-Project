#include<iostream>
#include<conio.h>
#include "Queue.h"
using namespace std;
int main()

{
	Queue Q;
	Q.enQueue(5,2);
	Q.enQueue(8,1);
	Q.enQueue(16,3);
	Q.enQueue(15,2);
	Q.enQueue(18,4);

	//Q.print();
	//Q.deQueue();
	//Q.deQueue();
	//Q.print();
	//Q.sort();

	Q.print();
	Q.enQueue(28,7);
	Q.print();
	Q.enQueue(28,5);
	Q.print();
	Q.enQueue(28,-1);
	Q.print();

	getch();
	return 0;
}