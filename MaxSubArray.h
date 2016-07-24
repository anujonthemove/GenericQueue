#ifndef MAXSUBARRAY_H
#define MAXSUBARRAY_H
/*Maximum of all subarrays of size k (Added a O(n) method)
Given an array and an integer k, find the maximum for each and every contiguous subarray of size k.

Examples:

Input :
arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6}
k = 3
Output :
3 3 4 5 5 5 6

Input :
arr[] = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13}
k = 4
Output :
10 10 10 15 15 90 90*/
#include <deque>
using namespace std;
void maxSubArray(int* arr, int n, int k){
    /*idea: 
     * we will use deque
     * we deal with k elements at a time
     * we store only those elements which do not have a greater element in the rest of elements. See example
     * e.g. arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6} with k=3;
     * lets deal with arr[0] to arr[2]
     * arr[0] has a greater element past it arr[1] in the sequence arr[0] to arr[2]
     * arr[1] also has a greater element past it arr[2] in the sequence arr[0] to arr[2]
     * but arr[2] has no greater element past it in the sequence arr[0] to arr[2]
     * 
     * Also, we store elements in decreasing order, so that the first element will be the largest
    */
    deque<int> q; int i=0;
    for(i=0; i<k; i++){
        while(!q.empty()&&arr[q.back()]<=arr[i])q.pop_back();
            q.push_back(i);
        }
    cout<<arr[q.front()]<<" ";
    for( ; i<n; i++){
        if(q.front()<=i-k)q.pop_front();
        while(!q.empty()&&arr[q.back()]<=arr[i])q.pop_back();
        q.push_back(i);
        cout<<arr[q.front()]<<" ";
    }
    cout<<endl;
}

#endif /* MAXSUBARRAY_H */

