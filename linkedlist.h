/*************************
 * Name: Abram Johnson
 * dataStructure 02
 * Purpose: Define linkedlist class and functions
**************************/

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "data.h"

template <typename T>
class LinearSinglyLinkedList {
    public:
        LinearSinglyLinkedList();
        ~LinearSinglyLinkedList();

        void setMaxSize();

        bool isEmptyList();
        bool isFullList();

        bool insertElmAtEnd();
        bool insertElmAtFront(); // addElmAtFront
        bool removeFromFront();

        bool copyList();
        bool deleteList();

        int nextElm();
    private:
        SNode<T> *head;
};

#endif