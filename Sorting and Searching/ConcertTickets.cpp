#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

int main()
{
    ll n,m;
    cin>>n>>m;
    ll x;
    vector<ll> tickets,customers;
    for(ll i=0;i<n;i++)
    {
        cin>>x;
        tickets.push_back(x);
    }
    for(ll i=0;i<m;i++)
    {
        cin>>x;
        customers.push_back(x);
    }
    sort(tickets.rbegin(),tickets.rend());
    //needs to be worked on
    return 0;
}
