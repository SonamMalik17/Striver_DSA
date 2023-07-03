#include <bits/stdc++.h>
using namespace std;

int nrt_b(int n, int x)
{
    if (x == 0)
        return 0;
    int low = 1;
    int high = x;
    while (low <= high)
    {
        long long int mid = (low + high) / 2;
        if((pow(mid,n)) == x)
            return mid;
        else if ((pow(mid,n)) < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int n,x;
    cout << "Enter n  : ";
    cin >> n;
    cout << "Enter a number whose nth root is to be find out : ";
    cin >> x;
    int ans = nrt_b(n,x);
    cout << " "<<n<<" root of " << x << " : " << ans << endl;
    return 0;
}