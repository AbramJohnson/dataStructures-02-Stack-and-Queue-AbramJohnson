/*************************
 * Name: Abram Johnson
 * dataStructure 02
 * Purpose: Create new data type and define SNode class
**************************/

#ifndef Data_H
#define DATA_H

template <typename T>
class SNode {
    private:
    T data;
    SNode<T> *next;

    friend class LinearSinglyLinkedList<T>;
};

#endif
