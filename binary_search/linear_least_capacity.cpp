#include <bits/stdc++.h>
using namespace std;

bool capacity_l(vector<int> a, int j, int days)
{
    int N = a.size();
    int count = 1;
    long long int sum = 0;
    for (int i = 0; i < N; i++)
    {
        if ((sum + a[i]) > j)
        {
            ++count;
            sum = a[i];
        }
        else
            sum += a[i];
    }
    if (count <= days)
        return true;
    return false;
}

int main()
{
    vector<int> wt;
    int i,N, ans;
    long long int days;
    cout << "Enter no. of objects  : ";
    cin >> N;
    cout << "Enter days : ";
    cin >> days;
    cout << "Enter weight values : " << endl;
    for (i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        wt.push_back(x);
    }
    long long int sum = 0;
    for (int s = 0; s < N; s++)
        sum += wt[s];
    int maxi = *max_element(wt.begin(), wt.end());
    for (i = maxi; i <= sum; i++)
    {
        if (capacity_l(wt, i, days))
        {
            ans = i;
            break;
        }
        else
            ans = -1;
    }
    cout << "least capacity : " << ans << endl;
    return 0;
}