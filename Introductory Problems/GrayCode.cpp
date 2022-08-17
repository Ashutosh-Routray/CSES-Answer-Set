#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

void func(ll n, ll size)
{
    string s = bitset<16>(n).to_string().substr(16 - size, size);
    cout<<s<<"\n";
}

int main()
{
    int n;
    cin >> n;
    ll hmm = pow(2, n);
    ll mat[hmm][n];
    ll x = n;
    for (ll i = 0; i < hmm; i++)
    {
        ll ans = i ^ (i >> 1);
        func(ans, n);
    }
    return 0;
}
