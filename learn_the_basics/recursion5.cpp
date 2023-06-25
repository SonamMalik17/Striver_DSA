#include<bits/stdc++.h>
using namespace std;

// Q : Print 'Nth' fibonacci number  
int fib(int n)
{
    if(n==0 || n==1)
        return n;
    return (fib(n-1)+fib(n-2));    
}

int main()
{
    int N,num;
    cout<<"Enter N : ";
    cin>>N;
    num=fib(N);
    cout<<"So "<<N<<"th fibonacci number : "<<num<<endl;
    return 0;
}