#include <bits/stdc++.h>
using namespace std;

bool bqt_l(vector<int> a, int j, long long int m, long long int k)
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

int main()
{
    vector<int> bloom;
    int N,ans;
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
    if((m*k)>N)
        ans=-1;
    else
    {
        int mini = *min_element(bloom.begin(), bloom.end());
        int maxi = *max_element(bloom.begin(), bloom.end());
        for(int i=mini;i<=maxi;i++)
        {
            if(bqt_l(bloom,i,m,k))
            {
                ans=i;
                break;
            }  
            else
                ans=-1;
        }
    }
    cout << "Minimum no. of days : " << ans << endl;
    return 0;
}