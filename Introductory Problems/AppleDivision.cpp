#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

ll func(vector<ll> v, ll i, ll temp, ll sum)
{
    ll ans = temp;
    if(i+1==v.size())return abs(sum-2*temp);
    return min(func(v,i+1,ans+v[i],sum),func(v,i+1,ans,sum));
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    cout << func(v, 0,0,sum);
    return 0;
}
