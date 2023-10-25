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

        bool copyList();
        bool deleteList();

        int nextElm();
    private:
        SNode<T> *head;

        int count;
        int size;
};

#endif