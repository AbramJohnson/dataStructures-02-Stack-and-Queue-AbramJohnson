/*************************
 * Name: Abram Johnson
 * dataStructure 02
 * Purpose: Define linkedlist class and functions
**************************/

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#define ZERO 0

#include "data.h"
#include <iostream>

template <typename T>
class LinearSinglyLinkedList {
    public:
        LinearSinglyLinkedList();
        ~LinearSinglyLinkedList();

        void setMaxSize(int);

        bool isEmptyList();
        bool isFullList();

        bool insertElmAtFront(const T&); // addElmAtFront
        bool insertElmAtEnd(const T&);

        bool removeFromFront();

        bool copyList(const LinearSinglyLinkedList&); // assuming that it means to copy a different list
        bool deleteList();

        T nextElm(); // assuming that it means to check the heads next element
    private:
        SNode<T> *head;

        int count; // to keep track of the amount of nodes in list
        int size;

        bool copyListRecursive(SNode<T>*); // helps with the copyList function
};

#endif