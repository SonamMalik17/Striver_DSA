#include<bits/stdc++.h>
using namespace std;

int firsty(int a[],int n,int x)
{
    int low=0;
    int high=n-1;
    int firstii=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==x)
        {
            firstii=mid;
            high=mid-1;
        }
        else if(a[mid]>x)
            high=mid-1;
        else
            low=mid+1;
    }
    return firstii;
}

int lasty(int a[],int n,int x)
{
    int low=0;
    int high=n-1;
    int lastii=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==x)
        {
            lastii=mid;
            low=mid+1;
        }
        else if(a[mid]>x)
            high=mid-1;
        else
            low=mid+1;
    }
    return lastii;
}

int main()
{
    int i,n,x,reqIn;
    cout<<"Enter array size : ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter x : ";
    cin>>x;
    pair<int,int> p;
    int firsti=firsty(a,n,x);
    int lasti=lasty(a,n,x);
    p.first=firsti;
    p.second=lasti;
    cout<<"x -> first : "<<p.first<<" and last : "<<p.second<<endl;
    return 0;
}