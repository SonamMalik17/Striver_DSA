#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    
    // precalculation
    // size of hash array is taken 26 as we are assuming that the problem states that we can only have lowercase english alphabets in the string 's' from 'a' to 'z'  
    int hash[26]={0};    // initializing all indices with '0'
    for(i=0;i<s.size();i++)
        hash[s[i]-'a']+=1;

    // queries
    int q;
    cout<<"Enter the total number of queries u wanna ask : ";
    cin>>q;
    while(q--)
    {
        char ch;
        cout<<"Enter the lowercase english alphabet whose count you wanna know : ";
        cin>>ch;
        // Fetching
        cout<<"Count of "<<ch<<" : "<<hash[ch-'a']<<endl;
    }
    return 0;
}