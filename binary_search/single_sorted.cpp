#include<bits/stdc++.h>
using namespace std;

int single_sorted(int a[],int n)
{
    if(n==1) 
        return a[0];
    if(a[0]!=a[1])
        return a[0];
    if(a[n-1]!=a[n-2])
        return a[n-1];
    int low=1;
    int high=n-2;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]!=a[mid-1] && a[mid]!=a[mid+1])
            return a[mid];
        else
        {
            if(((mid%2)!=0 && a[mid]==a[mid-1]) || ((mid%2)==0 && a[mid]==a[mid+1]))
                low=mid+1;
            else
                high=mid-1;
        }
    }
    return -1;
}

int main()
{
    int i,n,single;
    cout<<"Enter array size : ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    single=single_sorted(a,n);
    cout<<"single element : "<<single<<endl;
    return 0;
}