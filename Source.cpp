#include <iostream>

class Node {
public:
	int data;
	Node* next;

	Node(int val) {
		data = val;
		next = nullptr;
	}
};

class LinkedListQueue {
private:
	Node* front;
	Node* rear;

public:
	LinkedListQueue() {
		front = rear = nullptr;
	}

	~LinkedListQueue() {
		while (front != nullptr) {
			Node* temp = front;
			front = front->next;
			delete temp;
		}
	}

	bool isEmptyQueue() {
		return front == nullptr;
	}

	void enQueue(int data) {
		Node* newNode = new Node(data);

		if (isEmptyQueue()) {
			front = rear = newNode;
		}
		else {
			rear->next = newNode;
			rear = newNode;
		}
	}

	void deQueue() {
		if (isEmptyQueue()) {
			std::cout << "Queue Underflow!" << std::endl;
			return;
		}

		Node* temp = front;
		front = front->next;

		if (front == nullptr)
			rear = nullptr;

		delete temp;
	}
};
