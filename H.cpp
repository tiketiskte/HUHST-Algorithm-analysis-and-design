/**
* Copyright(c)
* Author : tiketiskte
**/
#include <bits/stdc++.h>
#define IOS {ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
#define PII pair<int, int>
#define PLL pair<ll, ll>
#define PDD pair<double, double>
#define sqr(x) (x) * (x)
#define SZ(X) (int)X.size()
#define INF 0x3f3f3f3f

using namespace std;

int n;
int solve(int x, int y) {
    if(x == 1 || y == 1) {
        return 1;
    } else if(x < y) {
        return solve(x, x);
    } else if(x == y) {
        return 1 + solve(x, x - 1);
    } else {
        return solve(x, y - 1) + solve(x - y, y);
    }
} 
int main(void)
{
    IOS
    while(cin >> n) {
        cout << solve(n, n) << endl;
    }
    system("pause");
    return 0;
}

