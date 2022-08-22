#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;
    ll x;
    multiset<ll> tickets;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        tickets.insert(x);
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> x;
        auto it = tickets.upper_bound(x);
        if (it == tickets.begin())
            cout << "-1\n";
        else
        {
            cout << (*(--it)) << "\n";
            tickets.erase(it);
        }
    }
    return 0;
}
