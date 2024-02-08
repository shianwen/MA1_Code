#include "Queue.h"


/*
    Test ID: Empty queue check
    queue::isEmpty()
    Description: test to determine if queue::isEmpty() returns true if a queue object is empty
    Test steps:
        1. Construct an empty queue object
        2. Invoke queue::isEmpty ()
        3. Conditionally evaluate the valued returned by queue::isEmpty ()
    Test data: size = 0
    Precondition: queue object is empty
    Postcondition: queue object is still empty
    Expected result: queue is empty; 1 is returned
    Actual result: queue is empty; 0 is returned
    Status: failed
*/
void test_isEmpty(void);


/*
    Test ID: Size check
    queue::size()
    Description: test to determine if queue::size() returns the size of the queue
    Test steps:
        1. Construct an empty queue object
        2. Populate queue with items
        3. Invoke queue::size()
        4. Conditionally evaluate the valued returned by queue::size ()
    Test data: size = 2
    Precondition: queue object has 2 items
    Postcondition: queue object still has 2 items
    Expected result: queue has 2 items; 2 is returned
    Actual result: queue has 2 items; 3 is returned
    Status: failed
*/
void test_size(void);


/*
    Test ID: Full queue check
    queue::isFull()
    Description: test to determine if queue::isFull() returns true if the queue is full
    Test steps:
        1. Construct an empty queue object
        2. Populate queue with items
        3. Invoke queue::isFull()
        4. Conditionally evaluate the valued returned by queue::isFull ()
    Test data: size = 2
    Precondition: queue object is full
    Postcondition: queue object is still full
    Expected result: queue is full; 1 is returned
    Actual result: queue is full; 1 is returned
    Status: passed
*/
void test_isFull(void);

/*
    Test ID: Dequeue on empty queue check
    queue::dequeue()
    Description: test to determine if queue::dequeue() returns false if unable to dequeue empty queue
    Test steps:
        1. Construct an empty queue object
        2. Invoke queue::dequeue()
        3. Conditionally evaluate the valued returned by queue::dequeue ()
    Test data: size = 0
    Precondition: queue object is empty
    Postcondition: queue object is still empty
    Expected result: dequeue does not work on empty queue; 0 is returned
    Actual result: dequeue works on empty queue; 1 is returned
    Status: failed
*/
void test_dequeueEmpty(void);

/*
    Test ID: Dequeue on queue check
    queue::dequeue()
    Description: test to determine if queue::dequeue() returns true if able to dequeue queue
    Test steps:
        1. Construct an empty queue object
        2. Enqueue one item into queue
        3. Invoke queue::dequeue()
        4. Conditionally evaluate the valued returned by queue::dequeue ()
    Test data: size = 1
    Precondition: queue object has 1 item
    Postcondition: queue object is empty
    Expected result: dequeue works on queue; 1 is returned
    Actual result: dequeue works on queue; 1 is returned
    Status: passed
*/
void test_dequeue(void);

/*
    Test ID: Enqueue on full queue check
    queue::enqueue()
    Description: test to determine if queue::enqueue() returns false if unable to enqueue full queue
    Test steps:
        1. Construct an empty queue object
        2. Populate queue until full 
        3. Invoke queue::enqueue()
        4. Conditionally evaluate the valued returned by queue::enqueue ()
    Test data: size = 2
    Precondition: queue object is full
    Postcondition: queue object is still full
    Expected result: enqueue does not work on full queue; 0 is returned
    Actual result: enqueue does not work on full queue; 0 is returned
    Status: passed
*/
void test_enqueueFull(void);

/*
    Test ID: Enqueue on queue check
    queue::enqueue()
    Description: test to determine if queue::enqueue() returns true if able to enqueue queue
    Test steps:
        1. Construct an empty queue object 
        2. Invoke queue::enqueue()
        3. Conditionally evaluate the valued returned by queue::enqueue ()
    Test data: size = 2
    Precondition: queue object has 1 item
    Postcondition: queue object has 2 items
    Expected result: enqueue works on queue; 1 is returned
    Actual result: enqueue works on queue; 1 is returned
    Status: passed
*/
void test_enqueue(void);

/*
    Test ID: Peek on empty queue check
    queue::peek()
    Description: test to determine if queue::peek() returns false if unable to peek empty queue
    Test steps:
        1. Construct an empty queue object
        2. Invoke queue::peek()
        3. Conditionally evaluate the valued returned by queue::peek ()
    Test data: size = 0
    Precondition: queue object is empty
    Postcondition: queue object is still empty
    Expected result: peek does not work on empty queue; -1 is returned
    Actual result: peek works on empty queue; arbitary value is returned
    Status: failed
*/
void test_peekEmpty(void);

/*
    Test ID: Peek on queue check
    queue::peek()
    Description: test to determine if queue::peek() returns rear value of queue
    Test steps:
        1. Construct an empty queue object
        2. Populate queue
        3. Invoke queue::peek()
        4. Conditionally evaluate the valued returned by queue::peek ()
    Test data: size = 2
    Precondition: queue object has 2 items
    Postcondition: queue object still has 2 items
    Expected result: peek works on queue; rear value is returned
    Actual result: peek works on queue; rear value is returned
    Status: passed
*/
void test_peek(void);