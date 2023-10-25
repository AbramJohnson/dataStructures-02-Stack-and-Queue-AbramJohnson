/*************************
 * Name: Abram Johnson
 * dataStructure 02
 * Purpose: Implemention of all queue prototype functions
**************************/

#include "queue.h"

using std::cout;
using std::endl;

template <typename T>
queue<T>::queue()
{
    LinearSinglyLinkedList queue;
}

template <typename T>
queue<T>::~queue()
{
    delete queue;
}

template <typename T>
bool queue<T>::insert(const T& new_data)
{
    return queue.insertElmAtEnd(new_data)
}

template <typename T>
bool queue<T>::remove()
{
    return queue.removeFromFront();
}

template <typename T>
void queue<T>::next()
{
    if(isEmpty())
    {
        cout << "empty." << endl;
    } else {
        cout << queue.head->data;
    }
}

template <typename T>
bool queue<T>::isEmpty()
{
    return stack.isEmptyList();
}

template <typename T>
bool queue<T>::isFull()
{
    return stack.isFullList();
}