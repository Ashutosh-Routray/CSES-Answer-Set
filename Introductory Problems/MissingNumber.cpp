#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<ll> v(n-1);
    for(ll i=0;i<n-1;i++)
    {
        cin>>v[i];
    }
    ll sum=0;
    for(ll i=0;i<v.size();i++)
    sum+=v[i];
    cout<<((n*(n+1))/2)-sum;
    return 0;
}
