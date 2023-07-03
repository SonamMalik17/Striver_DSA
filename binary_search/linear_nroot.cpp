#include <bits/stdc++.h>
using namespace std;

int nrt_l(int n, int x)
{
    if (x == 0)
        return 0;
    int i;
    for (i = 1; i <= x; i++)
    {
        if ((pow(i, n)) == x)
            return i;
        else if ((pow(i, n)) > x)
            break;
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
    int ans = nrt_l(n,x);
    cout << " "<<n<<" root of " << x << " : " << ans << endl;
    return 0;
}