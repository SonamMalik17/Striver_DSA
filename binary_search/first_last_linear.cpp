#include<bits/stdc++.h>
using namespace std;

pair<int,int> first_last(int a[],int n,int x)
{
    int first=-1;
    int last=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            if(first==-1)
                first=i;
            last=i;
        }
    }
    pair<int,int> p;
    p.first=first;
    p.second=last;
    return p;
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
    pair<int,int> p= first_last(a,n,x);
    cout<<"x -> first : "<<p.first<<" and last : "<<p.second<<endl;
    return 0;
}