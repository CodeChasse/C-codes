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
	void setNext(Node *next)
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
	Node* tail;
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
			tail = n;
		}
		else
		{
			tail->setNext(n);
			tail = tail->getNext();
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

	void update(int oldData, int newData)
	{
		Node* temp = head;
		if (head == NULL)
		{
			cerr << "is Empty" << endl;
		}
		else
		{
			while (temp != NULL)
			{
				if (temp->getData() == oldData)
				{
					temp->setData(newData);
					break;
				}
				temp = temp->getNext();
			}
		}
	}
	void search(int data)
	{
		if (head == NULL)
		{
			cerr << "is Empty";
		}
		else
		{
			Node* temp = head;
			while (temp != NULL)
			{
				if (temp->getData() == data)
				{
					cout << "data found" << endl;
					break;
				}
				temp = temp->getNext();
			}
		}
	}

	void del(int data)
	{
		if (head->getData() == data)
		{
			Node* temp = head;
			head = head->getNext();
			delete temp;
		}
		else
		{
			Node* temp = head;
			Node* pre = head;
			while (temp != NULL)
			{
				if (temp->getData() == data)
				{
					pre->setNext(pre->getNext());
					delete temp;
					break;

				}
				else
				{
					pre = temp;
					temp = temp->getNext();

				}
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

	//l.update(1,28);
	//l.del(3);
	//l.display();
	//l.search(2);
	l.del(2);
	l.display();


	system("pause");
	return 0;
}