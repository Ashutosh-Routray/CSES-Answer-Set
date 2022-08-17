#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll a;
    cin>>a;
    while(a!=1)
    {
        cout<<a<<" ";
        if(a%2){
            a*=3;
            a++;
        }
        else a/=2;
    }
    cout<<a;
    return 0;
}
