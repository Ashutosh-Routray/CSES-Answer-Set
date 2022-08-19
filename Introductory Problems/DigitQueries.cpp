#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x, y;
    ll count = 9, m = 1, ans = 0,i;
    for (i = 1; i <= 18; i++)
    {
        if (9 * m * i < n)
        {
            n -= count * i;
            m *= 10;
            ans += count;
            count = 9 * m;
        }
        else
        {
            x=ans+n/i ;
            y=n%i;
            break;
        }
    }
    if(y==0)
    {
        cout<<x%10<<"\n";
    }
    else
    {
        y=i-y;
        x++;
        while(y--)
        x/=10;
        cout<<x%10<<"\n";
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
