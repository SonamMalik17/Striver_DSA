#include<bits/stdc++.h>
using namespace std;

int min_rotated_usorted(int a[],int n)
{
    int low=0;
    int high=n-1;
    int ans=INT_MAX;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[low]<=a[high])
        {
            ans=min(ans,a[low]);
            break;
        }
        // left half is sorted
        else if(a[low]<=a[mid])
        {
            ans=min(ans,a[low]);
            low=mid+1;
        }

        // right half is sorted   
        else
        {
            ans=min(ans,a[mid]); 
            high=mid-1;
        }
    }
    return ans;
}

int main()
{
    int i,n,min;
    cout<<"Enter array size : ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    min=min_rotated_usorted(a,n);
    cout<<"minimum element : "<<min<<endl;
    return 0;
}