/*************************
 * Name: Abram Johnson
 * dataStructure 02
 * Purpose: Define queue class and functions
**************************/

#ifndef QUEUE_H
#define QUEUE_H

template <typename T>
class queue {
    public:
        queue();
        ~queue();

        bool insert();
        bool remove();

        T next();
    
        bool isEmpty();
        bool isFull();
};

#endif