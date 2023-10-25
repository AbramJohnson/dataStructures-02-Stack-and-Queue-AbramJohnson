/*************************
 * Name: Abram Johnson
 * dataStructure 02
 * Purpose: Define queue class and functions
**************************/

#ifndef QUEUE_H
#define QUEUE_H

#include "linkedlist.h"
#include <iostream>

template <typename T>
class queue {
    public:
        queue();
        ~queue();

        bool insert(const T&);
        bool remove();

        void next(); // using void to avoid runtime errors
    
        bool isEmpty();
        bool isFull();
};

#endif