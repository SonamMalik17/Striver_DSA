#include<bits/stdc++.h>
using namespace std;

void selection_sort(int a[],int n)
{
    int mini,i,j;
    for(i=0;i<=n-2;i++)
    {
        mini=i;
        for(j=i;j<=n-1;j++)
        {
            if(a[j]<a[mini])
            mini=j;
        }
        swap(a[i],a[mini]);
    }
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
    selection_sort(a,n);
    cout<<"\nArray after sorting : "<<endl;
    print(a,n);
    return 0;
}