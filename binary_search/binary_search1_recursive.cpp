#include<bits/stdc++.h>
using namespace std;

int binary_search(int a[],int low,int high,int target)
{
    if(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==target)
            return mid;
        else if(a[mid]>target)
            return binary_search(a,low,mid-1,target);
        else
            return binary_search(a,mid+1,high,target);
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
    reqIn=binary_search(a,0,n-1,target);
    if(reqIn==-1)
        cout<<"Element not found"<<endl;
    else
        cout<<"Element found at index "<<reqIn<<endl;
    return 0;
}