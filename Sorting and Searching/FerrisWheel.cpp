#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

int main()
{
    ll n,x;
    ll temp;
    cin>>n>>x;
    vector<ll> v;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    ll i=0,j=n-1,count=0;
    while(i<j)
    {
        if(v[i]+v[j]>x)
        j--;
        else
        {
            i++;
            j--;
        }
        count++;
    }
    if(i==j)count++;
    cout<<count;
    return 0;
}
