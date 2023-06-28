#include<bits/stdc++.h>
using namespace std;

int binary_search(int a[],int n,int target)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==target)
            return mid;
        else if(a[mid]>target)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}

int main()
{
    int i,n,target,reqIn;
    cout<<"Enter array size : ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter element to be searched : ";
    cin>>target;
    reqIn=binary_search(a,n,target);
    if(reqIn==-1)
        cout<<"Element not found"<<endl;
    else
        cout<<"Element found at index "<<reqIn<<endl;
    return 0;
}