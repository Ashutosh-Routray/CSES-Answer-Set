#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    ll a=max(n,x),b=min(n,x);
    ll temp=abs(n-x);
    a-=2*temp;
    b-=temp;
    if(a>=0 && a%3==0)cout<<"YES\n";
    else cout<<"NO\n";
}

int main()
{
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}
