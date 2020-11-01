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
 
int n;
ll x, minn, sum;
int main(void) {
    IOS
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
        if(sum < minn) {
            minn = sum;
        }
    }
    cout << 0 - minn << endl;
    //system("pause");
    return 0;
}
