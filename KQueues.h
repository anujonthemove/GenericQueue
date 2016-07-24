#ifndef KQUEUES_H
#define KQUEUES_H
#include<iostream>
#include<string>
using namespace std;
class KQueues{
    int* arr;
    int* top;
    int* arr2;
    int* rear;
    int n;
    int k;
    int free;
public:
   KQueues(int n, int k);
   void enqueue(int data, int k);
   int dequeue(int k);
   int front(int k);
   void print();
};

void KQueues::print(){
for(int i=0; i<n; i++)cout<<arr[i]<<" "; cout<<" arr "; cout<<endl;
for(int i=0; i<k; i++)cout<<top[i]<<" "; cout<<" top "; cout<<endl;
for(int i=0; i<k; i++)cout<<rear[i]<<" "; cout<<" rear "; cout<<endl;
for(int i=0; i<n; i++)cout<<arr2[i]<<" "; cout<<" arr2 "; cout<<endl;

}

KQueues::KQueues(int n, int k){
    arr = new int[n]; //store data
    arr2 = new int[n]; //store latter element index
    top = new int[k]; //store index of head of queue k
    rear = new int[k]; //store index of rear of queue k
    this->n = n; this->k = k; this->free = 0;
    for(int i=0; i<k; i++)top[i]=-1;
    for(int i=0; i<n; i++)arr2[i]=i+1;
    for(int i=0; i<n; i++)arr[i]=0;   
    for(int i=0; i<k; i++)rear[i]=-1;
}

void KQueues::enqueue(int data, int k){
    if(k>=this->k)throw string("Queues number is invalid");
    if(free==this->n)throw string("array is full");
    if(top[k]==-1){top[k]=free; arr[free]=data; rear[k]=free; int i=arr2[free]; arr2[free]=-1; free=i;}
    else{int i=rear[k]; int j=arr2[free]; arr[free]=data; arr2[i]=free; rear[k]=free; arr2[free]=-1; free=j;}    
}

int KQueues::dequeue(int k){
    if(k>=this->k)throw string("Queues number is invalid");
    if(top[k]==-1)throw string("Requested queue is empty");
    if(top[k]==rear[k]){int i=top[k]; top[k]=-1; rear[k]=-1; arr2[i]=free; free=i; int j = arr[i]; arr[i]=0; return j;}
    else{int i=top[k]; top[k]=arr2[i]; int j=arr[i]; arr2[i]=free; free=i; arr[i]=0; return j;}
}

int KQueues::front(int k){
    if(k>=this->k)throw string("Queues number is invalid");
    if(top[k]==-1)throw string("Requested queue is empty");
    return arr[top[k]];
}
#endif /* KQUEUES_H */

