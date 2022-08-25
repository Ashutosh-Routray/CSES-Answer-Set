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
    vector<ll> x;
    ll count=0;
    for(ll i=0;i<n-1;i++)
    {
        x.push_back(count+v[i]);
        count+=v[i];
    }
    // for(ll i=0;i<n-1;i++)
    // cout<<x[i]<<" ";
    // cout<<"\n";
    ll ans=INT64_MIN,mini=0;
    for(ll i=0;i<n-1;i++)
    {
        ans=max(ans,x[i]-mini);
        mini=min(x[i],mini);
    }
    if(ans)
    cout<<ans;
    else cout<<v[0]<<"\n";
    return 0;
}

//under progress
