#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        j=i;
        while(j>0 && (a[j]<a[j-1]))
        {
            swap(a[j],a[j-1]);
            j--;
        }
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
    insertion_sort(a,n);
    cout<<"\nArray after sorting : "<<endl;
    print(a,n);
    return 0;
}