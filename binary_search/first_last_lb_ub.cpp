#include<bits/stdc++.h>
using namespace std;

int lower__bound(int a[],int n,int x)
{
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]>=x)
        {
            ans=mid;
            high=mid-1;
        }
        else
            low=mid+1;
    }
    return ans;
}

int upper__bound(int a[],int n,int x)
{
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]>x)
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
    int i,n,x;
    cout<<"Enter array size : ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter x : ";
    cin>>x;
    int lb=lower__bound(a,n,x);
    pair<int,int> p;
    if(a[lb]!=x || lb==n)
    {
        p.first=-1;
        p.second=-1;
    }
    else
    {
        int ub=upper__bound(a,n,x);
        p.first=lb;
        p.second=ub-1;
    }
    cout<<"x -> first : "<<p.first<<" and last : "<<p.second<<endl;
    return 0;
}