#include<bits/stdc++.h>
using namespace std;

int upper__bound(int a[],int n,int target)
{
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]>target)
        {
            ans=mid;
            high=mid-1;
        }
        else
            low=mid+1;
    }
    return ans;
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
    reqIn=upper__bound(a,n,target);
    if(reqIn==n)
        cout<<"ub not found"<<endl;
    else
        cout<<"upper_bound : "<<reqIn<<endl;
    return 0;
}