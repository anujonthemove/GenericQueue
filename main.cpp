#include <iostream>
#include <string>
#include <deque>
#include "ArrayQueue.h"
#include "LinkedQueue.h"
#include "ArrayDeque.h"
#include "LinkedDeque.h"
#include "QueueUsingStack.h"
#include "MaxSubArray.h"
#include <queue>
#include "QueueBinaryNumber.h"
using namespace std;

int main(){
    printNBinaryNumbers(10);
    
    /*int arr[] = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13};
    maxSubArray(arr, 10, 4);*/
    
    /*QueueUsingStack<int> q;
    for(int i=0; i<4; i++)q.push(i);
    for(int i=0; i<2; i++)cout<<q.pop()<<endl;
    for(int i=4; i<6; i++)q.push(i);
    while(!q.isEmpty())cout<<q.pop()<<endl;*/
    
    /*LinkedDeque<int>* q = new LinkedDeque<int>();
    try{
        for(int i=0; i<3; i++){
            q->insertFront(i); 
            q->print();
        }
        for(int i=0; i<3; i++){q->insertLast(i); q->print();}
        while(!q->isEmpty()){q->deleteFront(); q->print();}
    }catch(string s){
        cout<<s<<endl;
    }*/
    
    /*ArrayDeque<int>* q = new ArrayDeque<int>();
    try{
        for(int i=0; i<3; i++){q->insertFront(i); q->print();}
        for(int i=0; i<3; i++){q->insertLast(i); q->print();}
        while(!q->isEmpty()) cout<<q->deleteLast()<<endl;
    }catch(string s){
        cout<<s<<endl;
    }*/
    
    /*LinkedQueue<int>* q = new LinkedQueue<int>();
    try{
        for(int i=0; i<4; i++)q->enqueue(i);
        while(!q->isEmpty())cout<<q->dequeue()<<endl;
    }catch(string s){
        cout<<s<<endl;
    }*/
    
    /*ArrayQueue<int>* q = new ArrayQueue<int>();
    try{
    for(int i=0; i<4; i++)q->enqueue(i);    
    for(int i=0; i<4; i++)cout<<q->pop()<<endl;
    }catch(string s){
        cout<<s<<endl;
    }*/
    return 0;
}
