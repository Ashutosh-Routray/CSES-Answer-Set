#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

int main()
{
    ll n, x;
    cin >> n >> x;
    ll temp;
    vector<ll> v;
    map<ll,vector<ll>> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
        mp[temp].push_back(i+1);
    }
    for(ll i=0;i<n;i++)
    {
        if(mp[x-v[i]].size()>0)
        {
            if((v[i]==x-v[i]) && (mp[v[i]].size()>1))
            {
                cout<<mp[v[i]][0]<<" "<<mp[v[i]][1];
                return 0;
            }
            else if(v[i]!=x-v[i])
            {
                cout<<mp[v[i]][0]<<" "<<mp[x-v[i]][0];
                return 0;
            }
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}
