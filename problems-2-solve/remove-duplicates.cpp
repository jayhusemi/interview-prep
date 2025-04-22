/*
https://www.interviewbit.com/data-structure-interview-questions/#program-to-remove-duplicates-from-a-sorted-array-in-place

1. Write a program to remove duplicates from a sorted array in place?
Input: {1, 1, 1, 2, 3, 3, 6, 6, 7}
Output: {1, 2, 3, 6, 7}
Explanation: The given input has only 1,2,3,6, and 7 as unique elements, hence the output only lists them out.

*/
/*

*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    //function that takes an array and its size as arguments
    int removeDuplicates(int a[],int n){
        int index=0;
        for(int i=1;i<n;i++) {
        
            if(a[i]!=a[index]) { //change index
                index++; //swap next line
                a[index]=a[i]; 
            } 
          }
          return index+1;
    }
};

int main()
{
    int T;
    //taking the number of test cases from user
    cin>>T;
    //running the loop for all test cases
    while(T--)
    {
        int N;
        //taking size input from user
        cin>>N;
        int a[N];
        //taking array input from user
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
        Solution ob;
        //calling the removeDuplicates in the Solution class
        int n = ob.removeDuplicates(a,N);
        //printing the array after removing duplicates
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
            cout<<endl;
        }
}
