#ifndef QUEUEUSINGSTACK_H
#define QUEUEUSINGSTACK_H
#include <iostream>
#include <stack>
#include <string>
using namespace std;
template<class T>
class QueueUsingStack{
    stack<T> stack1;
    stack<T> stack2;
public:
    void push(T& object);
    T& pop();
    T& peek();
    bool isEmpty();
};
    
template<class T>
void QueueUsingStack<T>::push(T& object){
    stack1.push(object);
}

template<class T>
T& QueueUsingStack<T>::pop(){
    if(!stack2.empty()){T& t = stack2.top(); stack2.pop(); return t;}
    while(!stack1.empty()){stack2.push(stack1.top()); stack1.pop();}
    if(!stack2.empty()){T& t = stack2.top(); stack2.pop(); return t;}
    else throw string("Empty queue");
}

template<class T>
T& QueueUsingStack<T>::peek(){
    if(!stack2.empty())return stack2.top();
    while(!stack1.empty()){stack2.push(stack1.top()); stack1.pop();}
    if(!stack2.empty())return stack2.top();
    else throw string("Empty queue");    
}

template<class T>
bool QueueUsingStack<T>::isEmpty(){
    return stack1.empty()&&stack2.empty();
}
#endif /* QUEUEUSINGSTACK_H */

