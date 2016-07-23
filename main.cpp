#include <iostream>
#include <string>
#include "ArrayQueue.h"
#include"LinkedQueue.h"
#include "ArrayDeque.h"
using namespace std;
int main(){
    ArrayDeque<int>* q = new ArrayDeque<int>();
    try{
        for(int i=0; i<3; i++){q->insertFront(i); q->print();}
        for(int i=0; i<3; i++){q->insertLast(i); q->print();}
        while(!q->isEmpty()) cout<<q->deleteLast()<<endl;
    }catch(string s){
        cout<<s<<endl;
    }
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
