#include<bits/stdc++.h>
using namespace std;

// Q : Reversing an array 

// 2-Pointer (Reversing an array)
void revArr_2p(int l,int r,int a[])
{
    if(l>=r)
        return;
    swap(a[l],a[r]);
    revArr_2p(l+1,r-1,a);
}

// 1-Pointer (Reversing an array)
void revArr_1p(int i,int a[],int n)
{
    if(i>=n/2)
        return;
    swap(a[i],a[n-i-1]);
    revArr_1p(i+1,a,n);
}

bool pal(int i,string &s)
{
    int n=s.size();

    // My way
    if(i>=n/2)
        return true;
    if(s[i]==s[n-i-1])
        pal(i+1,s);
    else
        return false;
    
    // Striver way
    // if(i>=n/2)
    //     return true;
    // if(s[i]!=s[n-i-1])
    //     return false;
    // return pal(i+1,s);

}

// Q : Check whether a string is palindrome or not 
int main()
{
    // 2-Pointer (Reversing an array)
    // int i2,n2;
    // cout<<"Enter size of array : ";
    // cin>>n2;
    // int a2[n2];
    // cout<<"Enter array elements : "<<endl;
    // for(i2=0;i2<n2;i2++)
    //     cin>>a2[i2];
    // cout<<"Array before reversing : "<<endl;
    // for(i2=0;i2<n2;i2++)
    //     cout<<a2[i2]<<" ";
    // revArr_2p(0,n2-1,a2);
    // cout<<"\n(2-Pointer)Array after reversing : "<<endl;
    // for(i2=0;i2<n2;i2++)
    //     cout<<a2[i2]<<" ";

    // 1-Pointer (Reversing an array)
    // int i1,n1;
    // cout<<"Enter size of array : ";
    // cin>>n1;
    // int a1[n1];
    // cout<<"Enter array elements : "<<endl;
    // for(i1=0;i1<n1;i1++)
    //     cin>>a1[i1];
    // cout<<"Array before reversing : "<<endl;
    // for(i1=0;i1<n1;i1++)
    //     cout<<a1[i1]<<" ";
    // revArr_1p(0,a1,n1);
    // cout<<"\n(1-Pointer)Array after reversing : "<<endl;
    // for(i1=0;i1<n1;i1++)
    //     cout<<a1[i1]<<" ";


    // (Check whether a string is palindrome or not)
    string s;
    bool c;
    cout<<"Enter a string : ";
    cin>>s;
    c=pal(0,s);
    if(c==1)
        cout<<"String is Palindrome"<<endl;
    else
        cout<<"String is not a Palindrome"<<endl;
    return 0;
}