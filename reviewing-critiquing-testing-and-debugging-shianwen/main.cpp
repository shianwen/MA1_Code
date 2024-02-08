/* Attibutes
	1. Not having enqueue return a boolean value makes it difficult to confirm if item was successfully added to queue
	2. Not having dequeue return a boolean value makes it difficult to confirm if item was successfully removed from queue
	3. Having all function headers and definitions in main.cpp makes code cluttered and hard to navigate
	4. Using a queue of fixed size makes it inefficient to add new items without reaching the max size
	5. Using a queue makes it difficult to access certain items in the queue
*/

// This code was taken from https://www.techiedelight.com/queue-implementation-cpp/
// The code has been modified from the original to provide opportunities to learn
// g++ -g -Wall -std=c++11 -o MA1 main.cpp Queue.cpp testQueue.cpp

#include "testQueue.h"

// main function
int main()
{
	// call your test functions here!
	
	test_isEmpty();
	test_size();
	test_isFull();
	test_dequeueEmpty();
	test_dequeue();
	test_enqueueFull();
	test_enqueue();
	test_peekEmpty();
	test_peek();
	return 0;
}

