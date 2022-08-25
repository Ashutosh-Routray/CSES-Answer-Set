#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

int main()
{
    ll n,temp;
    cin>>n;
    vector<ll> v;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    ll mid=v[n/2];
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        ans+=abs(mid-v[i]);
    }
    cout<<ans;
    return 0;
}
