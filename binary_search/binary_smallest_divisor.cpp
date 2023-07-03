#include <bits/stdc++.h>
using namespace std;

long long int reqTime(vector<int>& piles,int N,int mid)
{
    long long int Sum=0;
    for(int j=0;j<N;j++)
        Sum+=ceil((double)piles[j]/(double)mid);
    return Sum;
}

int Koko_b(int N, vector<int>& piles, int H) 
{
    int low=1;
    int high=*max_element(piles.begin(), piles.end());
    while(low<=high)
    {
        int mid=(low+((high-low)/2));
        long long int totalHours=reqTime(piles,N,mid);
        if(totalHours<=H)
            high=mid-1;
        else
            low=mid+1;
    }
    return low;
}

int main()
{
    vector<int> piles;
    int N,H;
    cout << "Enter no. of piles  : ";
    cin >> N;
    cout << "Enter maximum no. of available hours  : ";
    cin >> H;
    cout<<"Enter no. of bananas in piles respectively : "<<endl;
    for(int i=0;i<N;i++)
    {
        int x;
        cin >> x;
        piles.push_back(x);
    }
        
    int ans = Koko_b(N,piles,H);
    cout <<"Minimum rate of eating bananas : "<<ans<< endl;
    return 0;
}