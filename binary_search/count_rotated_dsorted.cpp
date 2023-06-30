#include<bits/stdc++.h>
using namespace std;

int rotation_count_dsorted(int a[],int n)
{
    int low=0;
    int high=n-1;
    int ind=-1;
    int ans=INT_MAX;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[low]==a[mid] && a[high]==a[mid])
        {
            if(ans>a[low])
            {
                ans=a[low];
                ind=low;
            }
            high=high-1;
            low=low+1;
            continue;
        }
        else if(a[low]<=a[high])
        {
            if(ans>a[low])
            {
                ans=a[low];
                ind=low; 
            }
            break;
        }
        // left half is sorted
        else if(a[low]<=a[mid])
        {
            if(ans>a[low])
            {
                ans=a[low];
                ind=low;
            }
            low=mid+1;
        }

        // right half is sorted   
        else
        {
            if(ans>a[mid])
            {
                ans=a[mid];
                ind=mid;
            }
                
            high=mid-1;
        }
    }
    return ind;
}

int main()
{
    int i,n,cnt;
    cout<<"Enter array size : ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cnt=rotation_count_dsorted(a,n);
    cout<<"No. of rotations : "<<cnt<<endl;
    return 0;
}