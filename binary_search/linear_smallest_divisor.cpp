#include <bits/stdc++.h>
using namespace std;

long long int reqTime(vector<int>& piles,int N,int i)
{
    long long int Sum=0;
    for(int j=0;j<N;j++)
        Sum+=ceil((double)piles[j]/(double)i);
    return Sum;
}

int Koko_l(int N, vector<int>& piles, int H) 
{
    int maxi=*max_element(piles.begin(), piles.end());
    int i;
    long long int totalHours;
    for(i=1;i<=maxi;i++)
    {
        totalHours=reqTime(piles,N,i);
        if(totalHours<=H)
            return i;
    }   
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
        
    int ans = Koko_l(N,piles,H);
    cout <<"Minimum rate of eating bananas : "<<ans<< endl;
    return 0;
}