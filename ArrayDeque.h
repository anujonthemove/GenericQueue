#ifndef ARRAYDEQUE_H
#define ARRAYDEQUE_H
#include <string>
using namespace std;
template<class T>
class ArrayDeque{
    int front; int rear; int n; int* arr;
public:
    ArrayDeque();
    ArrayDeque(int n);
    int size();
    void insertFront(T& object);
    void insertLast(T& object);
    T& deleteFront();
    T& deleteLast();
    T& getFront();
    T& getRear();
    bool isEmpty();
    bool isFull();
    void print();
};

template<class T>
ArrayDeque<T>::ArrayDeque(){
    arr = new T[10];
    this->n = 10;
    front = 0;
    rear = 0;    
}

template<class T>
ArrayDeque<T>::ArrayDeque(int n){
    arr = new T[n];
    this->n = n;
    front = 0;
    rear = 0;
}

template<class T>
int ArrayDeque<T>::size(){
    return (n+rear-front)%n;
}

template<class T>
bool ArrayDeque<T>::isEmpty(){
    return size()==0;
}

//isFull() returns true when all the elements except one are filled
//to differentiate between the condition when array is empty and array is full
template<class T>
bool ArrayDeque<T>::isFull(){
    return size()==n-1; 
}

template<class T>
void ArrayDeque<T>::insertFront(T& object){
    if(isFull())throw string("Deque overflow");    
    if(front==0){arr[n-1]=object; front = n-1;}
    else arr[--front]=object;
}

template<class T>
void ArrayDeque<T>::insertLast(T& object){
    if(isFull())throw string("Deque overflow");
    arr[rear] = object;
    rear = (rear+1)%n;
}

template<class T>
T& ArrayDeque<T>::deleteFront(){
    if(isEmpty())throw string("Deque underflow");
    T& t = arr[front];
    front=(front+1)%n;
    return t;
}
template<class T>
T& ArrayDeque<T>::deleteLast(){
    if(isEmpty())throw string("Deque underflow");
    int i = ((rear==0)?n-1:rear-1);
    T& t = arr[i];
    rear=((rear==0)?n-1:(rear-1)%n);
    return t;
}

template<class T>
T& ArrayDeque<T>::getFront(){
    if(isEmpty())throw string("Deque underflow");
    return arr[front];
}

template<class T>
T& ArrayDeque<T>::getRear(){
    if(isEmpty())throw string("Deque underflow");
    int i = ((rear==0)?n-1:rear-1);
    return arr[i];
}

template<class T>
void ArrayDeque<T>::print(){
    for(int i=0; i<n; i++)cout<<arr[i]<<" ";
    cout<<endl;
    
}
#endif /* ARRAYDEQUE_H */

