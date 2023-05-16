#include<iostream>
using namespace std;

class Node
{
	int data;
	Node* next;
public:
	Node()
	{
		data = 0;
		next = NULL; 
	}
	Node(int data)
	{
		this->data = data;
	}
	void setData(int data)
	{
		this->data = data;
	}
	void setNext( Node *next)
	{
		this->next = next;
	}

	int getData()
	{
		return data;
	}
	Node* getNext()
	{
		return next;
	}
};


class linkedList
{
	Node* head;
public:
	linkedList()
	{
		head = NULL;
	}
	linkedList(Node *head)
	{
		this->head = head;
	}

	void add(int data)
	{
		Node* n = new Node(data);
		if (head == NULL)
		{
			head = n;
		}
		else
		{
			Node* temp = head;
			while (temp->getNext() != NULL)
			{
				temp = temp->getNext();
			}
			temp->setNext(n);
		}
	}

	void display()
	{
		Node* temp = head;
		if (head == NULL)
		{
			cerr << " empty";
		}
		else
		{
			while (temp != NULL)
			{
				cout << temp->getData() << endl;
				temp = temp->getNext();
			}
		}
	}
};



int main()
{
	linkedList l;
	l.add(1);
	l.add(2);
	l.add(3);
	l.add(4);

	l.display();


	system("pause");
	return 0;
}