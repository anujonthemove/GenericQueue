#include <iostream>
#include <string>
#include "Queue.h"
using namespace std;
int main(){
    Queue<int>* q = new Queue<int>();
    try{
    for(int i=0; i<4; i++)q->push(i);    
    for(int i=0; i<4; i++)cout<<q->pop()<<endl;
    }catch(string s){
        cout<<s<<endl;
    }
    return 0;
}
