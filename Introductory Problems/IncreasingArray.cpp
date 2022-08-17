#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<ll> v(n,0);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll ans=0;
    for(ll i=1;i<n;i++)
    {
        if(v[i]<v[i-1])
        {
            ans+=v[i-1]-v[i];
            v[i]=v[i-1];
        }
    }
    cout<<ans;
    return 0;
}
