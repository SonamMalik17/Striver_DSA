#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int low,int mid,int high)
{
    int i,j,m,temp[high-low+1];
    i=low;
    j=mid+1;
    m=0;
    while(i<=mid && j<=high)
    {
        if(a[i]>=a[j])
        {
            temp[m]=a[j];
            j++;
            m++;
        }
        else
        {
            temp[m]=a[i];
            i++;
            m++;
        }
    }
    if(i>mid)
    {
        while(j<=high)
        {
            temp[m]=a[j];
            j++;
            m++;
        }      
    }
    else
    {
        while(i<=mid)
        {
            temp[m]=a[i];
            i++;
            m++;
        }
    }
    for(m=low;m<=high;m++)
        a[m]=temp[m-low];
}
void merge_sort(int a[],int low,int high)
{
    if(low>=high) return;
    int mid=(low+high)/2;

    merge_sort(a,low,mid);
    merge_sort(a,mid+1,high);
    merge(a,low,mid,high);
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
    merge_sort(a,0,n-1);
    cout<<"\nArray after sorting : "<<endl;
    print(a,n);
    return 0;
}