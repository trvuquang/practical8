# ifndef LINKEDLIST_H
# define LINKEDLIST_H
# include <iostream>
# include <stdio.h>
# include <limits>
# include <array>
# include "Node.h"

using namespace std;

class LinkedList {
    public:
        LinkedList();
        LinkedList(int array[], int size);
        ~LinkedList();
        void addFront(int);
        void addEnd(int);
        void addAtPosition(int, int);
        void deleteFront();
        void deleteEnd();
        void deletePosition(int);
        int search(int);
        int getItem(int);
        void printItems();
               
    private:
        Node * head;
};

# endif