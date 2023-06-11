#include<iostream>
using namespace std;

class Node{
	int Data;
	Node* Right;
	Node* Left;
public:
	Node()
	{
		Data = 0;
		Right = Left = NULL;
	}
	Node(int data)
	{
		Data = data;
		Right = Left = NULL;
	}

	void setData(int data)
	{
		Data = data;
	}
	void setLeft(Node* left)
	{
		Left = left;
	}
	void setRight(Node* right)
	{
		Right = right;
	}

	int getData()
	{
		return Data;
	}
	Node* getLeft()
	{
		return Left;
	}
	Node* getRight()
	{
		return Right;
	}
};

class BST
{
	Node* Root;
public:
	BST()
	{
		Root = NULL;
	}

	void Insert(int data)
	{
		Node* N = new Node(data);
		if (Root == NULL)
		{
			Root = N;
		}
		else
		{
			Node* temp = Root;
			while (true)
			{
				if (temp->getData() < data)
				{
					if (temp->getRight() == NULL)
					{
						temp->setRight(N);
						break;
					}
					else
					{
						temp->setRight(temp->getRight());
					}
				}
				else
				{
					if (temp->getData() > data)
					{
						if (temp->getLeft() == NULL)
						{
							temp->setLeft(N);
							break;
						}
						else
						{
							temp->setLeft(temp->getLeft());
						}
					}

				}
			}
		}
	}


	void Disply()
	{
		if (Root == NULL)
		{
			cerr << "Root is Empty";
		}
	}
};

int main()
{
	BST bst;
	bst.Disply();


	system("pause");
	return 0;
}