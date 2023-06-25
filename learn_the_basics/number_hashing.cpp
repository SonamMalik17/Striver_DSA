#include<bits/stdc++.h>
using namespace std;

// inside main : maximum size of int array -> (10)^6 
// globally : maximum size of int array -> (10)^7
// inside main : maximum size of bool array -> (10)^7
// globally : maximum size of bool array -> (10)^8
// and overall maximum size of a hash array : (10)^9
// and if we go beyond these sizes, there will be an error : Segmentation Fault

int main()
{
    int i,n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    
    // precalculation
    // size of hash array is taken 13 as we are assuming that the problem states that we can only have atmost '12' value at any index of array 'a' so for '0' to '12' we take '13' size of hash array  
    int hash[13]={0};    // initializing all indices with '0'
    for(i=0;i<n;i++)
        hash[a[i]]+=1;

    // queries
    int q;
    cout<<"Enter the total number of queries u wanna ask : ";
    cin>>q;
    while(q--)
    {
        int number;
        cout<<"Enter the number whose count you wanna know : ";
        cin>>number;
        // Fetching
        cout<<"Count of "<<number<<" : "<<hash[number]<<endl;
    }
    return 0;
}