#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

int main()
{
    ll n,x;
    cin>>n;
    map<ll,ll> mp;
    for(ll i=0;i<n;i++)
    {
        cin>>x;
        mp[x]++;
    }
    cout<<mp.size();
    return 0;
}
