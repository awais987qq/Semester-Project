#include"Stack.h"
#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
	Stack A;
	A.push(2);
	A.push(5);
	A.push(1);
	A.print();
	A.pop();
	A.pop();
	A.print();

	getch();

	return 0;

}