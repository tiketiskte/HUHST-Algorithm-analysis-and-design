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
PII a[maxn];
int n, ans;
bool cmp(PII a, PII b) {
    return a.second < b.second;
}
int main(void)
{
    IOS
    while(cin >> n && n != 0) {
        for(int i = 0; i < n; i++) {
            cin >> a[i].first >> a[i].second;
        }
        sort(a, a + n, cmp);
        int tmp = a[0].second;
        ans = 1;
        for(int i = 1; i < n; i++) {
            if(a[i].first >= tmp) {
                tmp = a[i].second;
                ans++;
            }
        }
        cout << ans << endl;
    }
    system("pause");
    return 0;
}

