#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    string s;
    cin>>s;
    ll ans=0,count=0;
    for(ll i=1;i<s.size();i++)
    {
        if(s[i]!=s[i-1])count=1;
        else count++;
        ans=max(ans,count);
    }
    cout<<ans;
    return 0;
}
