/*************************
 * Name: Abram Johnson
 * dataStructure 02
 * Purpose: Create new data type and define SNode class
**************************/

#ifndef Data_H
#define DATA_H

template <typename T>
class LinearSinglyLinkedList;

template <typename T>
class SNode { // Basic one-way node that holds T data.
    private:
    T data;
    SNode<T> *next;

    friend class LinearSinglyLinkedList<T>; // Allows linkedlist class to use private class elements
};

#endif
