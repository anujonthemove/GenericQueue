#ifndef QUEUE_H
#define QUEUE_H
#include <string>
using namespace std;
template<class T>
class Queue{
	T* arr; 
	public:
	int front; int rear; int n;
	Queue();
	Queue(int size);
	void push(const T& val);
	T& pop();
	T& peek();
	int size();
	bool isEmpty();
};

template<class T>
Queue<T>::Queue(){
	arr = new T[10];
	front = 0; rear = 0;
	n = 10;
}
template<class T> 
Queue<T>::Queue(int size){
	arr = new T[size];
	front = 0; rear = 0;
	n = size;
}
template<class T>
int Queue<T>::size(){
	return (n+rear-front)%n;
}
template<class T>
bool Queue<T>::isEmpty(){
	return size()==0;
}
template<class T> 
void Queue<T>::push(const T& val){
	if(size()==n-1)throw string("Queue overflow");
	arr[rear]=val;
	rear=(rear+1)%n;
}
template<class T>
T& Queue<T>::pop(){
	if(size()==0)throw string("Queue underflow");
	T& val = arr[front];
	front = (front+1)%n;
	return val;
}
template<class T>
T& Queue<T>::peek(){
	if(size()==0)throw string("Queue underflow");
	return arr[front];
}
#endif