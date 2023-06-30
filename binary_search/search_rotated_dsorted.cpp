#include<bits/stdc++.h>
using namespace std;

bool rotated_dsorted_search(int a[],int n,int x)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(x==a[mid])
            return 1;
        else if(a[low]==a[mid] && a[high]==a[mid])
        {
            high=high-1;
            low=low+1;
            continue;
        }
        
        // left half is sorted
        else if(a[low]<=a[mid])
        {
            if(a[low]<=x && a[mid]>=x)
                high=mid-1;
            else
                low=mid+1;
        }

        // right half is sorted   
        else
        {
            if(a[high]>=x && a[mid]<=x)
                low=mid+1;
            else
                high=mid-1; 
        }
    }
    return 0;
}

int main()
{
    int i,n,x;
    bool exist;
    cout<<"Enter array size : ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter element to be searched : ";
    cin>>x;
    exist=rotated_dsorted_search(a,n,x);
    if(exist)
        cout<<"Element found"<<endl;
    else
        cout<<"Element not found"<<endl;
    return 0;
}