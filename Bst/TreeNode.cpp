
#include"Tree.h"
#include<iostream>
using namespace std;


//.................TreeNode implementation......
TreeNode::TreeNode()
{

}

TreeNode::TreeNode(int data, int key)
{
	this->data = data;
	this->key = key;
	this->right = NULL;
	this->left = NULL;

}

void TreeNode::setData(int data)
{
	this->data = data;
}

void TreeNode::setKey(int key)
{
	this->key = key;
}

void TreeNode::setRight(TreeNode* right)
{
	this->right = right;
}

void TreeNode::setLeft(TreeNode* left)
{
	this->left = left;
}

int TreeNode::getKey()
{
	return key;
}

int TreeNode::getData()
{
	return data;
}

TreeNode* TreeNode::getRight()
{
	return right;
}

TreeNode* TreeNode::getLeft()
{
	return left;
}

//.........Tree Implemnantation.......

Tree::Tree()
{
	Root = NULL;
}

bool Tree::isEmpty()
{
	if (Root == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Tree::removeNode(int key)
{

}



void Tree::insert(int data, int key)
{
	if (isEmpty())
	{
		TreeNode* temp = new TreeNode(data, key);
		Root = temp;
	}
	else
	{
		TreeNode* temp = Root;
		TreeNode* parent;

		while (temp!=NULL)
		{
			if (temp->getKey() == key)
			{
				return;
			}
			else if (temp->getKey() > key)
			{
				parent = temp;
				temp = temp->getLeft();
			}
			else 
			{
				parent = temp;
				temp = temp->getRight();
			}
		}//loop
		TreeNode* newNode = new TreeNode(data, key);

			if (parent->getKey() > key)
			{
				parent->setLeft(temp);
			}
			else if (parent->getKey() < key)
			{
				parent->setRight(temp);
			}
	}//if else

	
}//void function

TreeNode* Tree::search(int Key)
{
	TreeNode* temp = Root;
	while (temp != NULL)
	{
		if (temp->getKey() == Key)
		{
			return temp;
		}
		else if (temp->getKey() > Key)
		{
			temp = temp->getLeft();
		}
		else
		{
			temp = temp->getLeft();
		}
	}
}
//......inorder Traversing.......
void Tree::inorder(TreeNode* n)
{
	if (n != NULL)
	{
		inorder(n->getLeft());
		cout << n->getKey() << endl;
		inorder(n->getRight());
	}
}

void Tree::display()
{
	inorder(Root);
}
