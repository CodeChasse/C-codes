#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
	Node* prev;
};
class Doublelinkedlist {
public:
	Node* head;
	Node* tail;
	Doublelinkedlist() {
		head = NULL;
		tail = NULL;
	}
	void addNode(int value) {
		Node* newNode = new Node();
		newNode->data = value;
		newNode->next = NULL;
		if (head == NULL) {
			newNode->prev = NULL;
			head = newNode;
			tail = newNode;
		}
		else {
			tail->next = newNode;
			newNode->prev = tail;
			tail = newNode;
		}
	}
	Node* getHead() {
		return head;
	}
	Node* getTail() {
		return tail;
	}
};
int main() {
	Doublelinkedlist myList;
	myList.addNode(33);
	myList.addNode(56);
	myList.addNode(21);
	myList.addNode(44);
	Node* currentNode = myList.getHead();
	while (currentNode != NULL) {
		cout << currentNode->data << " ";
		currentNode = currentNode->next;
	}

	system("pause");
	return 0;
}
