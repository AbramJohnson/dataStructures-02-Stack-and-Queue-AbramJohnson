/*************************
 * Name: Abram Johnson
 * dataStructure 02
 * Purpose: Implementation of all stack prototype functions
**************************/

#include "stack.h"

using std::cout;
using std::endl;

template <typename T>
stack<T>::stack()
{
    LinearSinglyLinkedList stack;
}

template <typename T>
stack<T>::~stack()
{
    delete stack;
}

template <typename T>
bool stack<T>::push(const T& new_data)
{
    return stack.insertElmAtFront(new_data);
}

template <typename T>
bool stack<T>::pop()
{
    return stack.removeFromFront();
}

template <typename T>
void stack<T>::top()
{
    if(isEmpty())
    {
        cout << "empty." << endl;
    } else {
        cout << stack.head->data;
    }
}

template <typename T>
bool stack<T>::isEmpty()
{
    return stack.isEmptyList();
}

template <typename T>
bool stack<T>::isFull()
{
    return stack.isFullList();
}