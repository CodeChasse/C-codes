#include<iostream>
using namespace std;

class Node
{
	int data;
	Node* left;
	Node* right;
public:
	Node()
	{
		int data = 0;
		left = right = NULL;
	}
	Node(int data)
	{
		this->data = data;
		left = right = NULL;
	}

	void setLeft(Node* left)
	{
		this->left = left;
	}
	void setRight(Node* right)
	{
		this->right = right;
	}
	void setData(int data)
	{
		this->data = data;
	}

	Node* getLeft()
	{
		return left;
	}
	Node* getRight()
	{
		return right;
	}
	int getData()
	{
		return data;
	}
};


class BST
{
	Node* root;
public:

	BST()
	{
		root = NULL;
	}

	void display()
	{
		if (root == NULL)
		{
			cout << "Root is Empty";
		}
		
	}
};





int main()
{
	BST bst;
	bst.display();


	system("pause");
	return 0;
}