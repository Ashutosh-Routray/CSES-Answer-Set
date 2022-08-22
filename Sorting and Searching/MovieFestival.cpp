#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v;
    ll a,b;
    for(ll i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back({b,a});
    }
    sort(v.begin(),v.end());
    ll start=0,end=0,ans=0;
    for(ll i=0;i<n;i++)
    {
        if(v[i].second>=end)
        {
            start=v[i].second;
            end=v[i].first;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
