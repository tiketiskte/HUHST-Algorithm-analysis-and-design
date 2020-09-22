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
#define INF 0x3f3f3f3fi

using namespace std;
int ans;
int solve(int x) {
    for(int i = 1; i <= x / 2; i++) {
        ans++;
        solve(i);
    }
    return ans;
}
int n;
int main(void)
{
    IOS
    while(cin >> n) {
        ans = 1;
        cout << solve(n) << endl;
    }
    system("pause");
    return 0;
}

