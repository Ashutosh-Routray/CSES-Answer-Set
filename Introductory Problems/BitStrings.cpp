#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll ans = 1;
    while (n--)
    {
        ans *= 2;
        ans %= mod;
    }
    cout << ans;
    return 0;
}
