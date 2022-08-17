#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

int main()
{
    string s;
    cin>>s;
    map<char,ll> mp;
    for(ll i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    ll count=0,oddcount=-1;
    char odd='$';
    for(auto i:mp)
    {
        if(i.second%2)
        {count++;odd=i.first;oddcount=i.second;}
    }
    if(count>1)cout<<"NO SOLUTION\n";
    else
    {
        vector<char> v;
        for(auto i:mp)
        {
            if(i.second%2==0)
            {
                ll temp=i.second/2;
                while(temp--)
                v.push_back(i.first);
            }
        }
        for(ll i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        if(odd!='$')
        while(oddcount--)
        cout<<odd;
        for(ll i=v.size()-1;i>=0;i--)
        {
            cout<<v[i];
        }
    }
    return 0;
}
