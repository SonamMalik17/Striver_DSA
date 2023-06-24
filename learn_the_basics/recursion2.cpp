#include<bits/stdc++.h>
using namespace std;

// Q1 : Print name 'N' times
void printName(int N)
{
    cout<<"Sonam"<<endl;
    if(N==1)
        return;
    else
        printName(N-1);
}

// Q2 : Print linearly from '1' to 'N'
void print1toN(int i2,int n2)
{
    if(i2>n2)
    {
        return;
    }
    else
    {
        cout<<i2<<endl;
        print1toN(i2+1,n2);
    }
}

// Q3 : Print linearly from 'N' to '1'
void printNto1(int i3,int n3)
{
    if(i3<1)
        return;
    else
    {
        cout<<i3<<endl;
        printNto1(i3-1,n3); 
    }
}

// Q4 : Print linearly from '1' to 'N' (Backtrack means phle recursive call and then print statement)
void print1toNB(int i4,int n4)
{
    if(i4<1)
        return;
    print1toNB(i4-1,n4);
    cout<<i4<<endl;
}

// Q5 : Print linearly from 'N' to '1' (Backtrack)
void printNto1B(int i5,int n5)
{
    if(i5>n5)
        return;
    printNto1B(i5+1,n5);
    cout<<i5<<endl;
}

int main()
{
    // int n1;
    // cout<<"Enter n1 : ";
    // cin>>n1;
    // printName(n1);

    // int n2;
    // cout<<"Enter n2 : ";
    // cin>>n2;
    // print1toN(1,n2);

    // int n3;
    // cout<<"Enter n3 : ";
    // cin>>n3;
    // printNto1(n3,n3);

    // int n4;
    // cout<<"Enter n4 : ";
    // cin>>n4;
    // print1toNB(n4,n4);

    int n5;
    cout<<"Enter n5 : ";
    cin>>n5;
    printNto1B(1,n5);

    return 0;
}