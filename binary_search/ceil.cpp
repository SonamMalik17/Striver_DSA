#include<bits/stdc++.h>
using namespace std;

int ceiil(int a[],int n,int target)
{
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]>=target)
        {
            ans=a[mid];
            high=mid-1;
        }
        else
            low=mid+1;
    }
    return ans;
}

int main()
{
    int i,n,target,cl;
    cout<<"Enter array size : ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter element to be searched : ";
    cin>>target;
    cl=ceiil(a,n,target);
    cout<<"Ceil of "<<target<<" : "<<cl<<endl;
    return 0;
}