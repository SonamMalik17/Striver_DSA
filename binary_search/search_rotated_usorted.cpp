#include<bits/stdc++.h>
using namespace std;

int rotated_usorted_search(int a[],int n,int x)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(x==a[mid])
            return mid;
        
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
    return -1;
}

int main()
{
    int i,n,x,reqIn;
    cout<<"Enter array size : ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter element to be searched : ";
    cin>>x;
    reqIn=rotated_usorted_search(a,n,x);
    if(reqIn==-1)
        cout<<"Element not found"<<endl;
    else
        cout<<"Element found at index "<<reqIn<<endl;
    return 0;
}