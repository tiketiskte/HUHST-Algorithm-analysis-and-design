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

const int maxn = 10000 + 5;
int n, x, a[maxn];
int main(void)
{
    IOS
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x >> a[i];
    }
    sort(a, a + n);
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ans += fabs(a[i] - a[n / 2]);
    }
    cout << ans << endl;
    system("pause");
    return 0;
}

