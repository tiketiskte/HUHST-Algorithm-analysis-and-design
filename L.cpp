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

int a, b;
int solve(int x) {
    int ans = 0;
    for(int i = 1; i * i < x; i++) {
        if(x % i == 0) {
            ans += 2;
        }
    }
    int _a = sqrt(x);
    if(_a * _a == x) {
        ans++;
    }
    //cout << ans << endl;
    return ans;
}
int main(void)
{
    IOS
    int ans1 = 0, ans2 = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        int tmp = solve(i);
        if(tmp > ans1) {
            ans1 = tmp;
            ans2 = i;
        }
    }
    cout << ans1 << " " << ans2 << endl;
    system("pause");
    return 0;
}

