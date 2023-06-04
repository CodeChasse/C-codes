#include <iostream>

class ArrayQueue {
private:
	int front;
	int rear;
	int capacity;
	int* queueArray;

public:
	ArrayQueue(int size) {
		capacity = size;
		front = rear = -1;
		queueArray = new int[capacity];
	}

	~ArrayQueue() {
		delete[] queueArray;
	}

	bool isEmptyQueue() {
		return front == -1;
	}

	bool isFullQueue() {
		return (rear + 1) % capacity == front;
	}

	void enQueue(int data) {
		if (isFullQueue()) {
			std::cout << "Queue Overflow!" << std::endl;
			return;
		}

		rear = (rear + 1) % capacity;
		queueArray[rear] = data;

		if (front == -1)
			front = rear;
	}

	void deQueue() {
		if (isEmptyQueue()) {
			std::cout << "Queue Underflow!" << std::endl;
			return;
		}

		if (front == rear) {
			front = rear = -1;
		}
		else {
			front = (front + 1) % capacity;
		}
	}
};
