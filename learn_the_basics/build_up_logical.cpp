#include<bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern2(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern3(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern4(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void pattern5(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-i);j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern6(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i+1);j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern7(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
            cout<<" ";
        for(int k=1;k<=(2*i-1);k++)
            cout<<"*";
        cout<<endl;
    }
}

void pattern8(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<(i+1);j++)
            cout<<" ";
        for(int k=1;k<=(2*(n-i)-1);k++)
            cout<<"*";
        cout<<endl;
    }
}

void pattern9(int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=1;j<(n-i);j++)
            cout<<" ";
        for(k=1;k<=(2*i+1);k++)
            cout<<"*";
        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<(i+1);j++)
            cout<<" ";
        for(k=1;k<=(2*(n-i)-1);k++)
            cout<<"*";
        cout<<endl;
    }
}

void pattern10(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern11(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
                cout<<"1 ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}

void pattern12(int n)
{
    int i,j,k,m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(k=1;k<=(2*(n-i));k++)
        {
            cout<<"  ";
        }
        for(m=j-1;m>0;m--)
        {
            cout<<m<<" ";
        }
        cout<<endl;
    }
}

void pattern13(int n)
{
    int c=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<c<<" ";
            ++c;
        }
        cout<<endl;
    }
}

void pattern14(int n)
{
    for(int i=1;i<=n;i++)
    {
        char ch='A';
        for(int j=1;j<=i;j++)
        {
            cout<<ch;
            ++ch;
        }
        cout<<endl;
    }
}

void pattern15(int n)
{
    for(int i=1;i<=n;i++)
    {
        char ch='A';
        for(int j=1;j<=(n-i+1);j++)
        {
            cout<<ch;
            ++ch;
        }
        cout<<endl;
    }
}

void pattern16(int n)
{
    char ch='A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<ch;
        }
        ++ch;
        cout<<endl;
    }
}

void pattern17(int n)
{
    for(int i=1;i<=n;i++)
    {
        char ch='A';
        for(int j=1;j<=(n-i);j++)
            cout<<" ";
        for(int k=1;k<=i;k++)
        {
            cout<<ch;
            ++ch;
        }
        ch=ch-2;
        while(ch>='A')
        {
            cout<<ch;
            --ch;
        }
        cout<<endl;
    }
}

void pattern18(int n)
{
    
    for(int i=1;i<=n;i++)
    {
        char ch='A'+n-i;
        for(int j=1;j<=i;j++)
        {
            cout<<ch;
            ++ch;
        }
        cout<<endl;
    }
}

void pattern19(int n)
{
    int i,j,k,m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i);j++)
            cout<<"*";
        for(k=0;k<(2*i);k++)
            cout<<" ";
        for(m=0;m<(n-i);m++)
            cout<<"*";
        cout<<endl;
    }
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<(n-i);j++)
            cout<<"*";
        for(k=0;k<(2*i);k++)
            cout<<" ";
        for(m=0;m<(n-i);m++)
            cout<<"*";
        cout<<endl;
    }
}

void pattern20(int n)
{
    int i,j,k,m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
            cout<<"*";
        for(k=0;k<(2*(n-i)-2);k++)
            cout<<" ";
        for(m=0;m<=i;m++)
            cout<<"*";
        cout<<endl;
    }
    for(i=n-2;i>=0;i--)
    {
        for(j=0;j<=i;j++)
            cout<<"*";
        for(k=0;k<(2*(n-i)-2);k++)
            cout<<" ";
        for(m=0;m<=i;m++)
            cout<<"*";
        cout<<endl;
    }
}

void pattern21(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        if(i==1 || i==n)
        {
            for(j=1;j<=n;j++)
                cout<<"*";
            cout<<endl;
        }
        else
        {
            cout<<"*  *";
            cout<<endl;
        }
    }
}

void pattern22(int n)
{
    int i,j,top,bottom,right,left,value;
    for(i=0;i<(2*n-1);i++)
    {
        for(j=0;j<(2*n-1);j++)
        {
            top=i;
            left=j;
            bottom=2*n-2-i;
            right=2*n-2-j;
            value=min(min(top,left),min(right,bottom));
            cout<<(n-value)<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the no. of rows : ";
    cin>>n;
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern9(n);
    // pattern10(n);
    // pattern11(n);
    // pattern12(n);
    // pattern13(n);
    // pattern14(n);
    // pattern15(n);
    // pattern16(n);
    // pattern17(n);
    // pattern18(n);
    // pattern19(n);
    // pattern20(n);
    // pattern21(n);
    pattern22(n);
    return 0;
}