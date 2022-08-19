#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

int ans = 0;
char board[8][8];

bool scared(ll x,ll y,int d)
{
    while(x>=0 && y>=0 && y<8)
    {
        if(board[x][y]=='-')
        {
            return 1;
        }
        y=y+d;
        x--;
    }
    return 0;
}

void solve(ll last)
{
    if (last == 8)
    {
        ans++;
    }
    for (ll i = 0; i < 8 && last < 8; i++)
    {
        if (board[last][i] == '*')
            continue;
        else
        {
            if (!(scared(last, i, -1) || scared(last, i, 0) || scared(last, i, 1)))
            {
                board[last][i] = '-';
                solve(last + 1);
                board[last][i] = '.';
            }
        }
    }
}

int main()
{
    for (ll i = 0; i < 8; i++)
    {
        for (ll j = 0; j < 8; j++)
        {
            cin >> board[i][j];
        }
    }
    solve(0);
    cout << ans;
    return 0;
}
