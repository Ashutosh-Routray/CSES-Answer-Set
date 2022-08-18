#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

int main()
{
    ll n,ans,temp;
    cin>>n;
    if(n==1)
    {
        cout<<"0\n";
        return 0;
    }
    for(ll i=1;i<=n;i++)
    {
        ans=((i*i)*((i*i)-1))/2;
        temp=(i-2)*(i-1)*4;
        if(temp<0)cout<<ans<<"\n";
        else cout<<ans-temp<<"\n";
    }
    return 0;
}
