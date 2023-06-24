#include<bits/stdc++.h>
using namespace std;

// Q : Print the sum of first 'N' numbers 

// 1. Parameterized way (Print the sum of first 'N' numbers)
void para_Sum(int i,int sum)
{
    if(i<1)
    {
        cout<<"(Parameterized way)Sum : "<<sum<<endl;
        return;
    }
    para_Sum(i-1,sum+i);
}

// 2. Functional way (Print the sum of first 'N' numbers)
int fun_Sum(int n)
{
    if(n==0)
        return 0;
    return (n+fun_Sum(n-1));
}


// Q : Print the factorial of 'N'
int fact(int n)
{
    if(n==0)
        return 1;
    return (n*fact(n-1));
} 

int main()
{
    // Parameterized way (Print the sum of first 'N' numbers)

    // int n1;
    // cout<<"Enter a number : ";
    // cin>>n1;
    // para_Sum(n1,0);


    // Functional way (Print the sum of first 'N' numbers)

    // int n2;
    // cout<<"Enter a number : ";
    // cin>>n2;
    // cout<<"(Functional way) Sum : "<<fun_Sum(n2)<<endl;


    // (Print the factorial of 'N')

    int n3;
    cout<<"Enter a number : ";
    cin>>n3;
    cout<<"Factorial : "<<fact(n3)<<endl;
    return 0;
}