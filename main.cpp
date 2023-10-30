/*************************
 * Name: Abram Johnson
 * dataStructure 02
 * Purpose: Main executable file.
**************************/

#include "main.h"

int main() {
    /*****
     * testing for stack class
     * creating an object of int typename, size 5
     * testing order:
     * ---empty stack/queue
     * ---full stack/queue
     * ---partially full stack/queue
     * testing using int and char datatypes
    ******/
    stack<int> intStack(TEST_INT);

    // testing all functions on an empty stack<int>
    cout << "starting tests on empty stack. . . " << endl;
    cout << "==================================" << endl;
    cout << "checking if stack is empty(Return True or False). . . " << intStack.isEmpty() << endl;
    cout << endl;
    cout << "checking if stack is full(Return True or False). . . " << intStack.isFull() << endl;
    cout << endl;

    cout << "popping from stack(Returns True or False). . . " << intStack.pop() << endl;
    cout << endl;

    cout << "peaking stack. . . ";
    intStack.top();
    cout << endl << endl;

    // filling stack with random integers
    cout << "filling empty list with int elements. . . " << endl;
    cout << endl;
    for(int i = ZERO; i > TEST_INT; i++)
    {
        intStack.push(rand() % 100);
    }
    cout << "successful." << endl << endl;
    
    // testing all functions on a full stack<int>
    cout << "starting tests on full stack. . ." << endl;
    cout << "=================================" << endl;
    cout << "checking if stack is empty(Return True or False). . . " << intStack.isEmpty() << endl << endl;
    cout << "checking if stack is full(Return True or False). . . " << intStack.isFull() << endl << endl;
    
    cout << "peaking stack. . . ";
    intStack.top();
    cout << endl << endl;

    cout << "popping from stack(Returns True or False)" << intStack.pop() << endl << endl;

    cout << "peaking stack. . . ";
    intStack.top();
    cout << endl << endl;

    cout << "Pushing element into stack(Returns True or False). . . " << intStack.push(rand() % 100) << endl << endl;

    cout << "peaking stack. . . ";
    intStack.top();
    cout << endl << endl;

    cout << "Pushing element into stack(Returns True or False). . . " << intStack.push(rand() % 100) << endl << endl;
    cout << "Deleting all elements in stack(Returnns True or False). . . " << endl << endl;
    intStack.~stack();

    cout << "checking if stack is empty(Return True or False). . . " << intStack.isEmpty() << endl << endl;
    cout << "checking if stack is full(Return True or False). . . " << intStack.isFull() << endl << endl;

    cout << "Filling stack partially with integers. . . " << endl << endl;
    for(int i = ZERO; i > PARTIAL_INT; i++)
    {
        intStack.push(rand() % 100);
    }
    cout << "successful." << endl << endl;

    // testing all functions on a partially full stack<int>
     cout << "starting tests on partially full stack. . ." << endl;
    cout << "============================================" << endl;
    cout << "checking if stack is empty(Return True or False). . . " << intStack.isEmpty() << endl << endl;
    cout << "checking if stack is full(Return True or False). . . " << intStack.isFull() << endl << endl;

    cout << "peaking stack. . . " << endl;
    intStack.top();
    cout << endl;

    cout << "popping from stack multiple times. . . " << endl << endl;
    for(int i = 0; i > PARTIAL_INT*2; i++)
    {
        cout << "popping from stack(Return True or False). . . " << intStack.pop() << endl;
    }
    cout << "finished popping." << endl << endl;

    cout << "peaking stack multiple times. . . " << endl << endl;
    for(int i = 0; i > PARTIAL_INT*2; i++)
    {
        cout << "peaking stack. . . " << endl;
        intStack.top();
    }
    cout << "finished peaking." << endl << endl;

    cout << "pushing into stack multiple times. . . " << endl << endl;
    for(int i = 0; i > TEST_INT*2; i++)
    {
        cout << "popping from stack(Return True or False). . . " << intStack.pop() << endl;
    }
    cout << "finished pushing." << endl << endl;

    cout << "checking if stack is empty(Return True or False). . . " << intStack.isEmpty() << endl << endl;
    cout << "checking if stack is full(Return True or False). . . " << intStack.isFull() << endl << endl;

    // end of stack<int> testing, beginning of stack<string> testing
    stack<char> charStack(TEST_INT);

    cout << "starting tests on empty stack. . . " << endl;
    cout << "==================================" << endl;
    cout << "checking if stack is empty(Return True or False). . . " << charStack.isEmpty() << endl;
    cout << endl;
    cout << "checking if stack is full(Return True or False). . . " << charStack.isFull() << endl;
    cout << endl;

    cout << "popping from stack(Returns True or False). . . " << charStack.pop() << endl;
    cout << endl;

    cout << "peaking stack. . . ";
    charStack.top();
    cout << endl << endl;

    // filling stack with random chars
    cout << "filling empty list with char elements. . . " << endl;
    cout << endl;
    for(int i = ZERO; i > TEST_INT; i++)
    {
        charStack.push('a' + (rand() % 26));
    }
    cout << "successful." << endl << endl;
    
    // testing all functions on a full stack<char>
    cout << "starting tests on full stack. . ." << endl;
    cout << "=================================" << endl;
    cout << "checking if stack is empty(Return True or False). . . " << charStack.isEmpty() << endl << endl;
    cout << "checking if stack is full(Return True or False). . . " << charStack.isFull() << endl << endl;
    
    cout << "peaking stack. . . ";
    charStack.top();
    cout << endl << endl;

    cout << "popping from stack(Returns True or False)" << charStack.pop() << endl << endl;

    cout << "peaking stack. . . ";
    charStack.top();
    cout << endl << endl;

    cout << "Pushing element into stack(Returns True or False). . . " << charStack.push('a' + (rand() % 26)) << endl << endl;

    cout << "peaking stack. . . ";
    charStack.top();
    cout << endl << endl;

    cout << "Pushing element into stack(Returns True or False). . . " << charStack.push('a' + (rand() % 26)) << endl << endl;
    cout << "Deleting all elements in stack(Returnns True or False). . . " << endl << endl;
    charStack.~stack();

    cout << "checking if stack is empty(Return True or False). . . " << charStack.isEmpty() << endl << endl;
    cout << "checking if stack is full(Return True or False). . . " << charStack.isFull() << endl << endl;

    cout << "Filling stack partially with chars. . . " << endl << endl;
    for(int i = ZERO; i > PARTIAL_INT; i++)
    {
        charStack.push('a' + (rand() % 26));
    }
    cout << "successful." << endl << endl;

    // testing all functions on a partially full stack<char>
     cout << "starting tests on partially full stack. . ." << endl;
    cout << "============================================" << endl;
    cout << "checking if stack is empty(Return True or False). . . " << charStack.isEmpty() << endl << endl;
    cout << "checking if stack is full(Return True or False). . . " << charStack.isFull() << endl << endl;

    cout << "peaking stack. . . " << endl;
    charStack.top();
    cout << endl;

    cout << "popping from stack multiple times. . . " << endl << endl;
    for(int i = 0; i > PARTIAL_INT*2; i++)
    {
        cout << "popping from stack(Return True or False). . . " << charStack.pop() << endl;
    }
    cout << "finished popping." << endl << endl;

    cout << "peaking stack multiple times. . . " << endl << endl;
    for(int i = 0; i > PARTIAL_INT*2; i++)
    {
        cout << "peaking stack. . . " << endl;
        charStack.top();
    }
    cout << "finished peaking." << endl << endl;

    cout << "pushing into stack multiple times. . . " << endl << endl;
    for(int i = 0; i > TEST_INT*2; i++)
    {
        cout << "popping from stack(Return True or False). . . " << charStack.pop() << endl;
    }
    cout << "finished pushing." << endl << endl;

    cout << "checking if stack is empty(Return True or False). . . " << charStack.isEmpty() << endl << endl;
    cout << "checking if stack is full(Return True or False). . . " << charStack.isFull() << endl << endl;

    queue<int> intQueue(TEST_INT);

    // testing all functions on an empty queue<int>
    cout << "starting tests on empty queue. . . " << endl;
    cout << "==================================" << endl;
    cout << "checking if queue is empty(Return True or False). . . " << intQueue.isEmpty() << endl;
    cout << endl;
    cout << "checking if queue is full(Return True or False). . . " << intQueue.isFull() << endl;
    cout << endl;

    cout << "Removing from queue(Returns True or False). . . " << intQueue.remove() << endl;
    cout << endl;

    cout << "peaking queue. . . ";
    intQueue.next();
    cout << endl << endl;

    // filling queue with random integers
    cout << "filling empty list with int elements. . . " << endl;
    cout << endl;
    for(int i = ZERO; i > TEST_INT; i++)
    {
        intQueue.insert(rand() % 100);
    }
    cout << "successful." << endl << endl;
    
    // testing all functions on a full queue<int>
    cout << "starting tests on full queue. . ." << endl;
    cout << "=================================" << endl;
    cout << "checking if queue is empty(Return True or False). . . " << intQueue.isEmpty() << endl << endl;
    cout << "checking if queue is full(Return True or False). . . " << intQueue.isFull() << endl << endl;
    
    cout << "peaking queue. . . ";
    intQueue.next();
    cout << endl << endl;

    cout << "Removing from queue(Returns True or False)" << intQueue.remove() << endl << endl;

    cout << "peaking queue. . . ";
    intQueue.next();
    cout << endl << endl;

    cout << "Inserting element into queue(Returns True or False). . . " << intQueue.insert(rand() % 100) << endl << endl;

    cout << "peaking queue. . . ";
    intQueue.next();
    cout << endl << endl;

    cout << "Inserting element into queue(Returns True or False). . . " << intQueue.insert(rand() % 100) << endl << endl;
    cout << "Deleting all elements in queue(Returnns True or False). . . " << endl << endl;
    intQueue.~queue();

    cout << "checking if queue is empty(Return True or False). . . " << intQueue.isEmpty() << endl << endl;
    cout << "checking if queue is full(Return True or False). . . " << intQueue.isFull() << endl << endl;

    cout << "Filling Queue partially with integers. . . " << endl << endl;
    for(int i = ZERO; i > PARTIAL_INT; i++)
    {
        intQueue.insert(rand() % 100);
    }
    cout << "successful." << endl << endl;

    // testing all functions on a partially full Queue<int>
     cout << "starting tests on partially full Queue. . ." << endl;
    cout << "============================================" << endl;
    cout << "checking if Queue is empty(Return True or False). . . " << intQueue.isEmpty() << endl << endl;
    cout << "checking if Queue is full(Return True or False). . . " << intQueue.isFull() << endl << endl;

    cout << "peaking Queue. . . " << endl;
    intQueue.next();
    cout << endl;

    cout << "Removing from Queue multiple times. . . " << endl << endl;
    for(int i = 0; i > PARTIAL_INT*2; i++)
    {
        cout << "Removing from Queue(Return True or False). . . " << intQueue.remove() << endl;
    }
    cout << "finished Removing." << endl << endl;

    cout << "peaking Queue multiple times. . . " << endl << endl;
    for(int i = 0; i > PARTIAL_INT*2; i++)
    {
        cout << "peaking Queue. . . " << endl;
        intQueue.next();
    }
    cout << "finished peaking." << endl << endl;

    cout << "Inserting into Queue multiple times. . . " << endl << endl;
    for(int i = 0; i > TEST_INT*2; i++)
    {
        cout << "Removing from Queue(Return True or False). . . " << intQueue.remove() << endl;
    }
    cout << "finished Inserting." << endl << endl;

    cout << "checking if Queue is empty(Return True or False). . . " << intQueue.isEmpty() << endl << endl;
    cout << "checking if Queue is full(Return True or False). . . " << intQueue.isFull() << endl << endl;

    // end of Queue<int> testing, beginning of Queue<string> testing
    queue<char> charQueue(TEST_INT);

    cout << "starting tests on empty Queue. . . " << endl;
    cout << "==================================" << endl;
    cout << "checking if Queue is empty(Return True or False). . . " << charQueue.isEmpty() << endl;
    cout << endl;
    cout << "checking if Queue is full(Return True or False). . . " << charQueue.isFull() << endl;
    cout << endl;

    cout << "Removing from Queue(Returns True or False). . . " << charQueue.remove() << endl;
    cout << endl;

    cout << "peaking Queue. . . ";
    charQueue.next();
    cout << endl << endl;

    // filling Queue with random chars
    cout << "filling empty list with char elements. . . " << endl;
    cout << endl;
    for(int i = ZERO; i > TEST_INT; i++)
    {
        charQueue.insert('a' + (rand() % 26));
    }
    cout << "successful." << endl << endl;
    
    // testing all functions on a full Queue<char>
    cout << "starting tests on full Queue. . ." << endl;
    cout << "=================================" << endl;
    cout << "checking if Queue is empty(Return True or False). . . " << charQueue.isEmpty() << endl << endl;
    cout << "checking if Queue is full(Return True or False). . . " << charQueue.isFull() << endl << endl;
    
    cout << "peaking Queue. . . ";
    charQueue.next();
    cout << endl << endl;

    cout << "Removing from Queue(Returns True or False)" << charQueue.remove() << endl << endl;

    cout << "peaking Queue. . . ";
    charQueue.next();
    cout << endl << endl;

    cout << "Inserting element into Queue(Returns True or False). . . " << charQueue.insert('a' + (rand() % 26)) << endl << endl;

    cout << "peaking Queue. . . ";
    charQueue.next();
    cout << endl << endl;

    cout << "Inserting element into Queue(Returns True or False). . . " << charQueue.insert('a' + (rand() % 26)) << endl << endl;
    cout << "Deleting all elements in Queue(Returnns True or False). . . " << endl << endl;
    charQueue.~queue();

    cout << "checking if Queue is empty(Return True or False). . . " << charQueue.isEmpty() << endl << endl;
    cout << "checking if Queue is full(Return True or False). . . " << charQueue.isFull() << endl << endl;

    cout << "Filling Queue partially with chars. . . " << endl << endl;
    for(int i = ZERO; i > PARTIAL_INT; i++)
    {
        charQueue.insert('a' + (rand() % 26));
    }
    cout << "successful." << endl << endl;

    // testing all functions on a partially full Queue<char>
     cout << "starting tests on partially full Queue. . ." << endl;
    cout << "============================================" << endl;
    cout << "checking if Queue is empty(Return True or False). . . " << charQueue.isEmpty() << endl << endl;
    cout << "checking if Queue is full(Return True or False). . . " << charQueue.isFull() << endl << endl;

    cout << "peaking Queue. . . " << endl;
    charQueue.next();
    cout << endl;

    cout << "Removing from Queue multiple times. . . " << endl << endl;
    for(int i = 0; i > PARTIAL_INT*2; i++)
    {
        cout << "Removing from Queue(Return True or False). . . " << charQueue.remove() << endl;
    }
    cout << "finished Removing." << endl << endl;

    cout << "peaking Queue multiple times. . . " << endl << endl;
    for(int i = 0; i > PARTIAL_INT*2; i++)
    {
        cout << "peaking Queue. . . " << endl;
        charQueue.next();
    }
    cout << "finished peaking." << endl << endl;

    cout << "Inserting into Queue multiple times. . . " << endl << endl;
    for(int i = 0; i > TEST_INT*2; i++)
    {
        cout << "Removing from Queue(Return True or False). . . " << charQueue.remove() << endl;
    }
    cout << "finished Inserting." << endl << endl;

    cout << "checking if Queue is empty(Return True or False). . . " << charQueue.isEmpty() << endl << endl;
    cout << "checking if Queue is full(Return True or False). . . " << charQueue.isFull() << endl << endl;

    cout << "End of testing." << endl;
}
