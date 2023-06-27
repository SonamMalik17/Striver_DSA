#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[],int i,int n)
{
    if(i==n) return;
    int j;
    j=i;
    while(j>0 && (a[j]<a[j-1]))
    {
        swap(a[j],a[j-1]);
        j--;
    }
    insertion_sort(a,i+1,n);
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
    insertion_sort(a,0,n);
    cout<<"\nArray after sorting : "<<endl;
    print(a,n);
    return 0;
}