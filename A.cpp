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

int n, m;
ll get_gcd(ll a, ll b) {
    if(b == 0) {
        return a;
    }
    return get_gcd(b, a % b);
}
ll get_lcm(ll a, ll b) {
    return a * b / get_gcd(a, b);
}
int main(void)
{
    IOS
    while(cin >> n >> m) {
        cout << get_gcd(n, m) << " " << get_lcm(n, m) << endl;
    }
    system("pause");
    return 0;
}

