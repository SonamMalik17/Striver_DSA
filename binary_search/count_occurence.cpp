#include<bits/stdc++.h>
using namespace std;

int count(int a[], int n, int x) {
	    int first=-1;
        int last=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                if(first==-1)
                    first=i;
                last=i;
            }
        }
        if(first==-1)
            return 0;
        else
            return (last-first+1);
	}

int main()
{
    int i,n,x;
    cout<<"Enter array size : ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter x : ";
    cin>>x;
    int num=count(a,n,x);
    cout<<"count of "<<x<<" : "<<num<<endl;
    return 0;
}