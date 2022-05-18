# include "Node.h"

// constructor
Node::Node (){
    //
}

void Node::setData(int val){
    data = val;
}

void Node::setNode(Node * n){
    next = n; 
}

int Node::getData(){
    return data;
}

Node * Node::getNode(){
    return next;
}