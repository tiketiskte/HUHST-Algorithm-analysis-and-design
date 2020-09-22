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

const int maxn = 1000 + 5;
int n;
int a[maxn][maxn], f[maxn][maxn];
int main(void)
{
    IOS
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++) {
        f[n][i] = a[n][i];
    }
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            f[i][j] = a[i][j] + max(f[i + 1][j], f[i + 1][j + 1]);
        }
    }
    cout << f[1][1] << endl;
    system("pause");
    return 0;
}

