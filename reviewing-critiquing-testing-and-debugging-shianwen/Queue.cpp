#include "Queue.h"

// Constructor to initialize queue
queue::queue(int size)
{
	arr = new int[size];
	capacity = size;
	front = 0;
	rear = -1;
	count = 0;
}

// Destructor to free memory allocated to the queue
queue::~queue()
{
	delete arr; // you are not required to test this function;
	            // however, are there issues with it?
}

// Utility function to remove front element from the queue
bool queue::dequeue()
{
	bool success = false;
	// check for queue underflow
	if (isEmpty())
	{
		cout << "UnderFlow\nProgram Terminated\n";
		//exit(EXIT_FAILURE);
	}
	else
	{
		cout << "Removing " << arr[front] << '\n';

		front = (front + 1) % capacity;
		count--;
		success = true;
	}
	return success;
}

// Utility function to add an item to the queue
bool queue::enqueue(int item)
{
	bool success = false;
	// check for queue overflow
	if (isFull())
	{
		cout << "OverFlow\nProgram Terminated\n";
		//exit(EXIT_FAILURE);
	}

	else
	{
		cout << "Inserting " << item << '\n';

		rear = (rear + 1) % capacity;
		arr[rear] = size();
		count++;
		success = true;
	}
	return success;
}

// Utility function to return front element in the queue
int queue::peek()
{
	if (isEmpty())
	{
		cout << "UnderFlow\nProgram Terminated\n";
		return -1;
		system("pause");
		//exit(EXIT_FAILURE);
	}
	return arr[rear];
}

// Utility function to return the size of the queue
int queue::size()
{
	return count;
}

// Utility function to check if the queue is empty or not
bool queue::isEmpty()
{
	return (size() == 0);
}

// Utility function to check if the queue is full or not
bool queue::isFull()
{
	return (size() == capacity);
}