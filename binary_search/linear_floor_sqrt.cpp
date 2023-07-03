#include <bits/stdc++.h>
using namespace std;

long long int flr_sqrt_l(long long int x)
{
    if (x == 0)
        return 0;
    long long int ans = 1;
    long long int i;
    for (i = 1;; i++)
    {
        if ((i * i) <= x)
            ans = i;
        else
            break;
    }
    return ans;
}

int main()
{
    long long int sq;
    cout << "Enter a number whose square root is to be find out : ";
    cin >> sq;
    long long int ans = flr_sqrt_l(sq);
    cout << "floor square root of "<<sq<<" : " << ans << endl;
    return 0;
}