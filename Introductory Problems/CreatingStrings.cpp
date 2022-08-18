#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<string> v;
    sort(s.begin(),s.end());
    do{
        v.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    cout<<v.size()<<"\n";
    for(ll i=0;i<v.size();i++)
    cout<<v[i]<<"\n";
    return 0;
}
