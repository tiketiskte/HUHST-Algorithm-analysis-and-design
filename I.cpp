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
int n, x, ans, a[31];
int main(void)
{
    IOS
    while(cin >> n) {
        ans = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> x;
        for(int i = 0; i < n; i++) {
            if(a[i] == x) {
                ans = i + 1;
                break;
            }
        }
        if(ans) {
            cout << ans << endl;
        } else {
            cout << "No found!" << endl;
        }
    }
    system("pause");
    return 0;
}

