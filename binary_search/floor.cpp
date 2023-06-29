#include<bits/stdc++.h>
using namespace std;

int flooor(int a[],int n,int target)
{
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]<=target)
        {
            ans=a[mid];
            low=mid+1;
        }
        else
            high=mid-1;
    }
    return ans;
}

int main()
{
    int i,n,target,flr;
    cout<<"Enter array size : ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter element to be searched : ";
    cin>>target;
    flr=flooor(a,n,target);
    cout<<"Floor of "<<target<<" : "<<flr<<endl;
    return 0;
}