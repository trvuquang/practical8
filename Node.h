# ifndef NODE_H
# define NODE_H
# include <iostream>
# include <stdio.h>

using namespace std;

class Node {
    public:
        void setData (int);
        int getData ();
        void setNode (Node *);
        Node * getNode ();
        Node();
    private:
        int data;
        Node * next;
};

# endif