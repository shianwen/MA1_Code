#include "testQueue.h"

void test_isEmpty(void)
{
    queue emptyQueue(1);
    bool empty = false; 
    empty = emptyQueue.isEmpty();
    if (empty)
    {
        cout << "isEmpty() test passed!" << endl;
    }
    else
    {
        cout << "isEmpty() test failed!" << endl;
    }

}

void test_size(void)
{
    queue q(2);
    int size = -1;
    q.enqueue(1);
    q.enqueue(2);
    size = q.size();
    if (size == 2)
    {
        cout << "size() test passed!" << endl;
    }
    else
    {
        cout << "size() test failed" << endl;
    }
    
}

void test_isFull(void)
{
    queue q(2);
    q.enqueue(1);
    q.enqueue(2);
    bool full = false;
    full = q.isFull();
    if (full)
    {
        cout << "isFull() test passed!" << endl;
    }
    else
    {
        cout << "isFull() test has failed" << endl;
    }
    
}

void test_dequeueEmpty(void)
{
    queue q(1);
    if (q.dequeue() == false)
    {
        cout << "dequeue() on empty test passed!" << endl;
    }
    else
    {
        cout << "dequeue() on empty test failed!" << endl;
    }
}

void test_dequeue(void)
{
    queue q(2);
    q.enqueue(1);
    if (q.dequeue() == true)
    {
        cout << "dequeue() test passed!" << endl;
    }
    else
    {
        cout << "dequeue() test failed!" << endl;
    }    
}

void test_enqueueFull(void)
{
    queue q(2);
    q.enqueue(1);
    q.enqueue(2);
    if (q.enqueue(3) == false)
    {
        cout << "enqueue() on full test passesd!" << endl;
    }
    else
    {
        cout << "enqueue() on full test failed!" << endl;
    }
    
}

void test_enqueue(void)
{
    queue q(2);
    q.enqueue(1);
    if (q.enqueue(2) == true)
    {
        cout << "enqueue() test passesd!" << endl;
    }
    else
    {
        cout << "enqueue() test failed!" << endl;
    }
}

void test_peekEmpty(void)
{
    queue q(1);
    if (q.peek() == -1)
    {
        cout << "peek() on empty test passed!" << endl;
    }
    else
    {
        cout << "peek() on empty test failed!" << endl;
    }
    
}

void test_peek(void)
{
    queue q(2);
    q.enqueue(1);
    q.enqueue(2);
    if (q.peek() == 1)
    {
        cout << "peek() test passed!" << endl;
    }
    else
    {
        cout << "peak() test failed!" << endl;
    }
    
}