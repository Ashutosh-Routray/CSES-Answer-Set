#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<ll> v;
    ll temp;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    ll ans=1;
    for(ll i=0;i<n;i++)
    {
        if(v[i]>ans)break;
        ans+=v[i];
    }
    cout<<ans;
    return 0;
}

