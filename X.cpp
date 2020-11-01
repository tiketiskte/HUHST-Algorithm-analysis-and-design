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
int m, c, n, a[maxn];
ll sum, ans;
int main(void)
{
    IOS
    cin >> m;
    while(m--) {
        sum = ans = 0;
        memset(a, 0, sizeof(a));
        cin >> c >> n;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        sort(a + 1, a + 1 + n);
        for(int i = 1; i <= n; i++) {
                sum += a[i];
                if(sum <= c) {
                    ans++;
                } else {
                    break;
                }
        }
        cout << ans << endl;
    }
    // system("pause");
    return 0;
}
