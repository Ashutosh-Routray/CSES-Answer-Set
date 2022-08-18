#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

int main()
{
    ll n;
    cin>>n;
    if((n+1)%4>1)cout<<"NO\n";
    else
    {
        ll ans=(n*(n+1))/4,count=0;
        vector<ll> v1,v2;
        for(ll i=n;i>0;i--)
        {
            if(count+i<=ans)
            {
                count+=i;
                v1.push_back(i);
            }
            else v2.push_back(i);
        }
        cout<<"YES\n";
        cout<<v1.size()<<"\n";
        for(ll i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
        cout<<"\n";
        cout<<v2.size()<<"\n";
        for(ll i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
    }
    return 0;
}
