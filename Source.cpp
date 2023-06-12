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
						temp = temp->getRight();
					}
				}
				else
				{
						if (temp->getLeft() == NULL)
						{
							temp->setLeft(N);
							break;
						}
						else
						{
							temp = temp->getLeft();
						}

				}
			}
		}
	}

	void Search(int data)
	{
		Node* a = new Node(data);
		if (Root == a)
		{
			cout << "data found";
		}
		else
		{
			Node* temp = Root;
			while (temp!=NULL)
			
			if (temp->getData() == data)
			{
				cout << "data found";
				break;
			}
			else if (temp->getData() < data)
			{
				temp = temp->getRight();
			}
			else
			{
				temp = temp->getLeft();
			}
		}
		cout << "data not found";

	}

	void Disply()
	{
		if (Root == NULL)
		{
			cerr << "Root is Empty";
		}
		else
		{
			cerr << " root is not empty";
		}
	}
};

int main()
{
	BST bst;
	bst.Insert(50);
	bst.Insert(100);
	bst.Insert(150);
	bst.Insert(40);
	bst.Insert(30);

	bst.Search(1);
	bst.Disply();
	system("pause");
	return 0;
}