/*************************
 * Name: Abram Johnson
 * dataStructure 02
 * Purpose: Define stack class and functions
**************************/

#ifndef STACK_H
#define STACK_H

#include "linkedlist.h"
#include <iostream>

template <typename T>
class stack {
    public:
        stack();
        stack(int);
        ~stack();

        bool push(const T&);
        bool pop();

        void top(); // put as void to avoid runtime errors

        bool isEmpty();
        bool isFull();
};

#endif