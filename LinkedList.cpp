# include "LinkedList.h"

LinkedList::LinkedList(){
    head = NULL;
}

LinkedList::LinkedList(int array[100], int size){
    head = NULL;
    addFront(array[0]);
    for (int i = 1; i < size; i++){
        addEnd(array[i]);
    }
}


void LinkedList::printItems(){
    Node * n;
    n = head;
    while (n != NULL) {
        cout << n->getData() << " ";
        n = n->getNode();
    }
}

void LinkedList::addFront(int newItem){
    Node * newNode = NULL;
    newNode = new Node();
    newNode->setData(newItem);
    newNode->setNode(head);
    head = newNode;
    
}

void LinkedList::addEnd(int newItem){
    Node * newNode = NULL;
    newNode = new Node();
    newNode->setData(newItem);
    newNode->setNode(NULL);

    Node * temp = head;
    while(temp->getNode() != NULL){
        temp = temp->getNode();
    }
    temp->setNode(newNode);
}

void LinkedList::addAtPosition(int position, int newItem){
    Node * temp = head;
    Node * newNode = NULL;
    newNode = new Node();
    newNode->setData(newItem);

    if (position <= 1)
        addFront(newItem);
    else {
        for(int i=2; i < position; i++) {
            if(temp->getNode() != NULL) {
                temp = temp->getNode();
            }
        }
        newNode->setNode(temp->getNode());
        temp->setNode(newNode);
    }
}

int LinkedList::search(int item){
    Node * temp = head;
    int pos = 1;
    while (temp != NULL){
        if (temp->getData() == item) {
            cout << pos << " ";
            return 1;           
        }
        temp = temp->getNode(); 
        pos++;               
    }
    cout << "0 ";
    return 0;
}

int LinkedList::getItem(int position){
    Node * temp = head;
    int pos = 1;
    while (temp != NULL){
        if (pos == position) {
            cout << temp->getData() << " ";
            return temp->getData();           
        }
        temp = temp->getNode(); 
        pos++;               
    }
    cout << numeric_limits < int >::max() << " ";
    return numeric_limits < int >::max();    
}

void LinkedList::deleteFront(){
    head = head->getNode();
}

void LinkedList::deleteEnd(){
    Node * temp = head;
    while ((temp->getNode())->getNode() != NULL){
        temp = temp->getNode();
    }
    temp->setNode(NULL);
}

void LinkedList::deleteAtPosition(int position){
    Node * temp = head;
    for (int i = 2; i < position; i++){
        if(temp->getNode() != NULL)
            temp = temp->getNode();
    }
    temp->setNode(temp->getNode()->getNode());
}

