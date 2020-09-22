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
 
const int maxn = 100 + 5;
int n, a[maxn], b[maxn], c[maxn], d[maxn], ans;
void print() {
    ans++;
    if(ans <= 3) {
        for(int i = 1; i <= n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
void dfs(int x) {
    for(int i = 1; i <= n; i++) {
        if(b[i] == 0 && c[i + x] == 0 && d[x - i + n] == 0) {
            a[x] = i;
            b[i] = 1;
            c[i + x] = 1;
            d[x - i + n] = 1;
            if(x == n) {
                print();
            } else {
                dfs(x + 1);
            }
            b[i] = 0;
            c[i + x] = 0;
            d[x - i + n] = 0;
        }
    }
}
int main(void)
{
    IOS
    cin >> n;
    dfs(1);
    cout << ans << endl;
    // system("pause");
    return 0;
}
