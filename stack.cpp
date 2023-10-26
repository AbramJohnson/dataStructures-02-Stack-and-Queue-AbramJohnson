/*************************
 * Name: Abram Johnson
 * dataStructure 02
 * Purpose: Implementation of all stack prototype functions
**************************/

#include "stack.h"

using std::cout;
using std::endl;

template <typename T>
stack<T>::stack() // upon creating a stack object it'll create its own linkedlist object
{
    LinearSinglyLinkedList newStack;
}

template <typename T>
stack<T>::~stack()
{
    newStack.deleteList();
}

template <typename T>
bool stack<T>::push(const T& new_data)
{
    return newStack.insertElmAtFront(new_data);
}

template <typename T>
bool stack<T>::pop()
{
    return newStack.removeFromFront();
}

template <typename T>
void stack<T>::top() // first checks to see if stack is empty before printing the following
{
    if(isEmpty())
    {
        cout << "empty." << endl;
    } else {
        cout << newStack.head->data;
    }
}

template <typename T>
bool stack<T>::isEmpty()
{
    return newStack.isEmptyList();
}

template <typename T>
bool stack<T>::isFull()
{
    return newStack.isFullList();
}