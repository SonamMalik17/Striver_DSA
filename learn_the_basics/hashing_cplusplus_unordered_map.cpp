#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    
    // precalculation (number hashing)
    unordered_map<int,int> mpp;  
    for(i=0;i<n;i++)
        mpp[a[i]]+=1;

    // iterating over the unordered_map (To check that it doesn't stores in sorted manner (Keys))
    cout<<"----------Map----------"<<endl;
    for(auto it:mpp)
    cout<<it.first<<"->"<<it.second<<endl;
    cout<<"-----------------------"<<endl;  

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
        cout<<"Count of "<<number<<" : "<<mpp[number]<<endl;
    }
    return 0;
}