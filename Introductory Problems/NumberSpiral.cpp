#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll n,x,y,ans=0;
    cin>>n;
    while(n--)
    {
        cin>>y>>x;
        if(x>=y)
        {
            ans=((((x-1)/2)*2)+1)*((((x-1)/2)*2)+1) + !(x%2);
            if(x%2)ans-=y-1;
            else ans+=y-1;
        }
        else
        {
            ans=((y/2)*2)*((y/2)*2) + (y%2);
            if(y%2)ans+=x-1;
            else ans-=x-1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
