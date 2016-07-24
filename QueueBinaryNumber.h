#ifndef QUEUEBINARYNUMBER_H
#define QUEUEBINARYNUMBER_H
/*
                                      1                                             
 *                               /        \                                       
 *                             10            11                               
 *                            / \           /     \                             
 *                        100     101      110      111                   
 *                       /  \     /  \    /   \      /   \
 *                   1000 1001  1010 1011 1100 1101 1110 1111
 * We can print n binary numbers if we can traverse this binary tree row wise
 * standard technique is used
 * idea: when each element of a row is printed, we add the elements of the next row in a queue
 * we pop and print from queue the required number of times (n)
 */
#include <queue>
#include <string>
using namespace std;

void printNBinaryNumbers(int n){
    queue<string> q;
    q.push("1");
    for(int i=0; i<n; i++){
        string s = q.front(); q.pop();
        cout<<s<<" ";   //print element of current row
        q.push(s+"0"); // create element of next row 
        q.push(s+"1"); // creating element of next row
    }
    cout<<endl;
}


#endif /* QUEUEBINARYNUMBER_H */

