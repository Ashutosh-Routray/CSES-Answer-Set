#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll x;
    vector<ll> a, b;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> x;
        b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll count = -1,ans=0;
    for (ll i = 0; i < m; i++)
    {
        for (ll j = count + 1; j < n && a[j] <= b[i] + k; j++)
        {
            if (a[j] >= b[i] - k)
            {
                count = j;
                ans++;
                break;
            }
        }
    }
    cout<<ans;
    return 0;
}
