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
LinearSinglyLinkedList<T>::LinearSinglyLinkedList() // initiates new head and size/count variables
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
    return count == ZERO; // returns if count = 0; is true or false
}

template <typename T>
bool LinearSinglyLinkedList<T>::isFullList()
{
    return count == size; // returns if count = size; is true or false
}

template <typename T>
bool LinearSinglyLinkedList<T>::insertElmAtFront(const T& front_data)
{
    bool f_added = false; // will return false if the if statement isn't passed
    bool f_full = isFullList();

    if(!f_full) // checks to see if list is full
    {
        SNode<T>* node = new SNode<T>;

        node->data = front_data;
        node->next = head;

        head = node; // sets head to new node

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
        SNode<T>* current = head; // duplicates head node for the sake of traversal

        while(current->next != NULL) // will move through list until it reaches the end
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

    if(!empty) // checks to see if list is empty first
    {
        SNode<T>* current = head;
        head = current->next; // changes head to the node its pointing to
        delete current; // deallocates previous head node

        count--;
        removed = true;
    }

    return removed;
}

template <typename T>
bool LinearSinglyLinkedList<T>::copyList(const LinearSinglyLinkedList& copyOtherList)
{
    deleteList();
    setMaxSize(copyOtherList.size); // redefines linkedlist before copying different list

    SNode<T>* other_current = copyOtherList.head; // duplicates other linkedlist head node
    
    return copyListRecursive(other_current);
}

template <typename T>
bool LinearSinglyLinkedList<T>::deleteList()
{
    SNode<T>* current = head;
    while(current) { // deletes all nodes starting from the head until empty
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
    return head->data; // returns the data of the head node
}

template <typename T>
bool LinearSinglyLinkedList<T>::copyListRecursive(SNode<T>* fcurrent) { // adds all nodes in a linkedlist starting from the tail
    if(fcurrent->next != NULL) {
        copyListRecursive(fcurrent->next); // calls itself if next node exists, terminates when NULL is found
    }
    return insertElmAtFront(fcurrent->data);
}