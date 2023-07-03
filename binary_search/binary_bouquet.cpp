#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int> a, int j, long long int m, long long int k)
{
    int N = a.size();
    long long int sum = 0;
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (a[i] <= j)
            ++count;
        else
        {
            sum += (count / k);
            count = 0;
        }
    }
    sum += (count / k);
    if (sum >= m)
        return true;
    return false;
}
int bqt_b(vector<int> &a, long long int m, long long int k)
{
    int n = a.size();
    long long int mul = m * k;
    if ((mul) > n)
        return -1;
    int ans = -1;
    int low = *min_element(a.begin(), a.end());
    int high = *max_element(a.begin(), a.end());
    while (low <= high)
    {
        long long int mid = (low + high) / 2;
        if (possible(a, mid, m, k))
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
    vector<int> bloom;
    int N;
    long long int m;
    long long int k;
    cout << "Enter no. of flowers  : ";
    cin >> N;
    cout << "Enter no. of bouquets  : ";
    cin >> m;
    cout << "Enter no. of consecutive flowers in each bouquet : ";
    cin >> k;
    cout<<"Enter bloom day values : "<<endl;
    for(int i=0;i<N;i++)
    {
        int x;
        cin>>x;
        bloom.push_back(x);
    }
    int ans = bqt_b(bloom,m,k);
    cout << "Minimum no. of days : " << ans << endl;
    return 0;
}