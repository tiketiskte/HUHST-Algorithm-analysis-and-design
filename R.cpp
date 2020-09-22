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

const int maxn = 1e5 + 5;
int n, m, x, ans, cnt[maxn];
int main(void)
{
    IOS
    cin >> n;
    while(n--) {
        ans = 0;
        memset(cnt, 0, sizeof(cnt));
        cin >> m;
        for(int i = 1; i <= m; i++) {
            cin >> x;
            cnt[x]++;
            if(ans < cnt[x]) {
                ans = cnt[x];
            }
        }
        for(int i = 1; ; i++) {
            if(ans == cnt[i]) {
                cout << i << " " << cnt[i] << endl;
                break;
            }
        }
    }
    system("pause");
    return 0;
}

