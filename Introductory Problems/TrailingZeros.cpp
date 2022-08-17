#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll ans=0;
    while(n>=5)
    {
        n/=5;
        ans+=n;
    }
    cout << ans;
    return 0;
}
