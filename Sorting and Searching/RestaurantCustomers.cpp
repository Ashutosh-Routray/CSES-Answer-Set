#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

int main()
{
    map<ll,ll> mp;
    ll n,a,b;
    vector<pair<ll,ll>> times;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>a>>b;
        times.push_back({a,1});
        times.push_back({b,-1});
    }
    sort(times.begin(),times.end());
    ll count=0,ans=0;
    for(ll i=0;i<times.size();i++)
    {
        count+=times[i].second;
        ans=max(ans,count);
    }
    cout<<ans;
    return 0;
}
