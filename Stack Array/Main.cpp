#include<iostream>
#include<conio.h>
#include"Stack.h"
using namespace std;
int main()
{

	Stack S;
	S.push(3);
	S.push(11);
	S.print();
	S.pop();
	S.print();
	//S.push(14);
	//S.print();

	getch();
	return 0;
}