/*************************
 * Name: Abram Johnson
 * dataStructure 02
 * Purpose: Implemention of all linkedlist prototype functions
**************************/

#include "linkedlist.h"
#include <iostream>
#include <cassert>
using namespace std;

template <typename T>
LinearSinglyLinkedList<T>::LinearSinglyLinkedList() 
{
    head = NULL;

    int size = ZERO;
    int count = ZERO;
}

template <typename T>
LinearSinglyLinkedList<T>::~LinearSinglyLinkedList() 
{
    deleteList();
}

template <typename T>
void LinearSinglyLinkedList<T>::setMaxSize(int new_size)
{
    size = new_size;
}

template <typename T>
bool LinearSinglyLinkedList<T>::isEmptyList()
{
    return count == ZERO;
}

template <typename T>
bool LinearSinglyLinkedList<T>::isFullList()
{
    return count == size;
}

template <typename T>
bool LinearSinglyLinkedList<T>::insertElmAtFront(const T& front_data)
{
    bool f_added = false;
    bool f_full = isFullList();

    if(!f_full) 
    {
        SNode<T>* node = new SNode<T>;

        node->data = front_data;
        node->next = head;

        head = node;

        count++;
        f_added = true;
    }

    return f_added;
}

template <typename T>
bool LinearSinglyLinkedList<T>::insertElmAtEnd(const T& end_data)
{
    bool e_added = false;
    bool e_full = isFullList();

    if(!e_full) {
        SNode<T>* current = head;

        while(current->next != NULL)
        {
            current = current->next;
        }
        SNode<T>* node = new SNode<T>;

        node->data = T;
        node->next = current->next;

        current->next = node;

        count++;
        e_added = true;
    }

    return e_added;
}

template <typename T>
bool LinearSinglyLinkedList<T>::removeFromFront()
{
    bool removed = false;
    bool empty = isEmptyList();

    if(!empty)
    {
        SNode<T>* current = head;
        head = current->next;
        delete current;

        count--;
        removed = true;
    }

    return removed;
}

template <typename T>
bool LinearSinglyLinkedList<T>::copyList(const LinearSinglyLinkedList& copyOtherList)
{
    deleteList();
    setMaxSize(copyOtherList.size);

    SNode<T>* other_current = copyOtherList.head;
    
    return copyListRecursive(other_current);
}

template <typename T>
bool LinearSinglyLinkedList<T>::deleteList()
{
    SNode<T>* current = head;
    while(current) {
        SNode<T>* remove_node = new SNode<T>;
        remove_node = current;

        current = current->next;
        delete remove_node;
    }

    head = NULL;
    count = 0;

    return true;
}

template <typename T>
T LinearSinglyLinkedList<T>::nextElm()
{
    SNode<T>* current = head;
    return current->next->data;
}

template <typename T>
bool LinearSinglyLinkedList<T>::copyListRecursive(SNode<T>* fcurrent) {
    if(fcurrent->next != NULL) {
        copyListRecursive(fcurrent->next);
    }
    return insertElmAtFront(fcurrent->data);
}