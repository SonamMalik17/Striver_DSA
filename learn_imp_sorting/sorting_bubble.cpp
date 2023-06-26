#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[],int n)
{
    int i,j,flag;
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                flag=1;
            }
        }
        if(flag==0)
            break;
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
    bubble_sort(a,n);
    cout<<"\nArray after sorting : "<<endl;
    print(a,n);
    return 0;
}