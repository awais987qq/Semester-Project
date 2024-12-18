#pragma once
#include"TreeNode.h"

class Tree
{
private:
	TreeNode* Root;



public:

	Tree();
	void insert(int, int);
	bool isEmpty();
	void removeNode(int);
	void Search();

	TreeNode* search(int Key);
	void inorder(TreeNode*);
	void display();
};


