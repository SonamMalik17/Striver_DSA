#include<bits/stdc++.h>
using namespace std;

void infinite_recursion()
{
    cout<<"1"<<endl;
    infinite_recursion();
}

int cnt=0;
void finite_recursion()
{
    // Base Condition
    if(cnt==4)
    {
        cout<<"Bye!!!"<<endl;
        return;     // Added a return statement to exit the function
    }
    
    cout<<cnt<<endl;
    ++cnt;
    finite_recursion();
}

int main()
{

    // infinite_recursion();
    finite_recursion();
    return 0;
}

