/*************************
 * Name: Abram Johnson
 * dataStructure 02
 * Purpose: Implemention of all queue prototype functions
**************************/

#include "queue.h"

using std::cout;
using std::endl;

template <typename T>
queue<T>::queue() // upon creating queue object, will create its own linkedlist object.
{
    LinearSinglyLinkedList newQueue;
    newQueue = new LinearSinglyLinkedList();
}

template <typename T>
queue<T>::queue(int size)
{
    newQueue.setMaxSize(size);
}

template <typename T>
queue<T>::~queue()
{
    newQueue.deleteList();
}

template <typename T>
bool queue<T>::insert(const T& new_data)
{
    return newQueue.insertElmAtEnd(new_data)
}

template <typename T>
bool queue<T>::remove()
{
    return newQueue.removeFromFront();
}

template <typename T>
void queue<T>::next() // function first checks if queue is empty before printing the following.
{
    if(isEmpty())
    {
        cout << "empty." << endl;
    } else {
        cout << newQueue.nextElm();
    }
}

template <typename T>
bool queue<T>::isEmpty()
{
    return newQueue.isEmptyList();
}

template <typename T>
bool queue<T>::isFull()
{
    return newQueue.isFullList();
}