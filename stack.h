/*************************
 * Name: Abram Johnson
 * dataStructure 02
 * Purpose: Define stack class and functions
**************************/

#ifndef STACK_H
#define STACK_H

template <typename T>
class Stack {
    public:
        Stack();
        ~Stack();

        bool push(T*);
        bool pop();

        bool top();

        bool isEmpty();
        bool isFull();
};

#endif