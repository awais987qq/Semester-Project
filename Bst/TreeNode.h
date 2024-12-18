#pragma once

class TreeNode
{
private:

	int data;
	int key;
	 
	TreeNode* right;
	TreeNode* left;


public:
	//......constructors
	TreeNode();
	TreeNode(int, int);
	//.......setters
	void setData(int);
	void setKey(int key);
	void setRight(TreeNode* right);
	void setLeft(TreeNode* left);
	//........
	int getKey();
	int getData();
	TreeNode* getRight();
	TreeNode* getLeft();
	

};



