#include<bits/stdc++.h>
using namespace std;

// map only stores values of those keys which are present in the array and it will automatically give 0 value if we ask for value of keys not present in the array

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
    map<int,int> mpp;  
    for(i=0;i<n;i++)
        mpp[a[i]]+=1;

    // precalculation (character hashing)
    // map<char,int> mpp;  
    // for(i=0;i<n;i++)
    //     mpp[a[i]]+=1;

    // iterating over the map (To check that it stores in sorted manner (Keys))
    // cout<<"----------Map----------"<<endl;
    // for(auto it:mpp)
    // cout<<it.first<<"->"<<it.second<<endl;
    // cout<<"-----------------------"<<endl;  

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