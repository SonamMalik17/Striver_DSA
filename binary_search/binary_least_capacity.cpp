#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int> a, int j, int days)
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

int capacity_b(vector<int> &a,int days)
{
    int n = a.size();
    int ans = -1;
    int low = *max_element(a.begin(), a.end());
    long long int high = 0;
    for (int s = 0; s < n; s++)
        high += a[s];
    while (low <= high)
    {
        long long int mid = (low + high) / 2;
        if (possible(a, mid,days))
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
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
    ans = capacity_b(wt, days);
    cout << "least capacity : " << ans << endl;
    return 0;
}