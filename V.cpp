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
 
const int maxn1 = 10000 + 5;
const int maxn2 = 100 + 5;
ll a[maxn2], b[maxn2], f[maxn1][maxn2];
int m, n;
int main(void) {
    IOS
    cin >> m >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
    }
    for(int i = 1; i <= n; i++) {
        for(int j = m; j >= 0; j--) {
            if(j >= a[i]) {
                f[i][j] = max(f[i - 1][j - a[i]] + b[i], f[i - 1][j]);
            } else {
                f[i][j] = f[i - 1][j];
            }
        }
    }
    cout << f[n][m] << endl;
    // system("pause");
    return 0;
}
