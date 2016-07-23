#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H
#include "Node.h"
#include <string>
using namespace std;

template<class T>
class LinkedQueue{
    Node<T>* head;
    Node<T>* tail;
    public:
        LinkedQueue();
        void enqueue(T& object);
        T& dequeue();
        T& peek();
        bool isEmpty();
};

template<class T>
LinkedQueue<T>::LinkedQueue(){
    head = NULL;
    tail = NULL;
}

template<class T>
void LinkedQueue<T>::enqueue(T& object){
    Node<T>* n = new Node<T>(object);
    if(tail==NULL){head = n; tail = n;}
    else{ tail->next = n; tail = n;}
}

template<class T>
T& LinkedQueue<T>::dequeue(){
    if(head==NULL)throw string("Empty Queue");
    Node<T>* n = head;
    head = head->next;
    T t = n->data;
    delete n;
    return t;
}

template<class T>
T& LinkedQueue<T>::peek(){
    if(head==NULL)throw string("Empty Queue");
    return head->data;
}

template<class T>
bool LinkedQueue<T>::isEmpty(){
    return head==NULL;
}
#endif /* LINKEDQUEUE_H */