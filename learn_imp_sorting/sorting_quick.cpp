#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int low,int high)
{
    int i,j,pi;
    i=low;
    j=high;
    pi=a[low];
    while(i<j)
    {
        while(a[i]<=pi && i<high)
            ++i;
        while(a[j]>pi && j>=i)
            --j;
        if(i<j)
            swap(a[i],a[j]);
    }
    swap(a[low],a[j]);
    return j;
}

void quick_sort(int a[],int low,int high)
{
    if(low>=high) return;
    int pi=partition(a,low,high);
    quick_sort(a,low,pi-1);
    quick_sort(a,pi+1,high);
}

void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}

int main()
{
    int i,n;
    cout<<"Enter array size : ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Array before sorting : "<<endl;
    print(a,n);
    quick_sort(a,0,n-1);
    cout<<"\nArray after sorting : "<<endl;
    print(a,n);
    return 0;
}