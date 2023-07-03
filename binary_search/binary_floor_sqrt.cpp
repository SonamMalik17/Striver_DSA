#include <bits/stdc++.h>
using namespace std;

long long int flr_sqrt_b(long long int x)
{
    if (x == 0)
        return 0;
    long long int low = 1;
    long long int high = x;
    // long long int ans=1;
    while (low <= high)
    {
        long long int mid = (low + high) / 2;
        if ((mid * mid) <= x)
        {
            // ans=mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    // return ans;
    return high;
}

int main()
{
    long long int sq;
    cout << "Enter a number whose square root is to be find out : ";
    cin >> sq;
    long long int ans = flr_sqrt_b(sq);
    cout << "floor square root of "<<sq<<" : " << ans << endl;
    return 0;
}