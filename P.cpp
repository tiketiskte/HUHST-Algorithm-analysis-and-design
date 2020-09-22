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
const int maxn = 10 + 5;
int v1[maxn][maxn], v2[maxn][maxn], v3[maxn][maxn];
int n, m, a, b;
int main(void)
{
    IOS
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> v1[i][j];
        }
    }
    cin >> a >> b;
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            cin >> v2[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < b; j++) {
            for(int k = 0; k < m; k++) {
                v3[i][j] += v1[i][k] * v2[k][j];
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < b; j++) {
            cout << v3[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}

