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

const int maxn = 1000000 + 5;
int t, n, a[maxn];
ll get_sum(int arr[], int len) {
    ll thissum, maxsum;
    thissum = 0, maxsum = arr[0];
    for(int i = 0; i < len; i++) {
        thissum += arr[i];
        if(thissum > maxsum) {
            maxsum = thissum;
        } else if(thissum < 0) {
            thissum = 0;
        }
    }
    return maxsum;
}
int main(void)
{
    IOS
    cin >> t;
    while(t--) {
        memset(a, 0, sizeof(a));
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << get_sum(a, n - 1) << endl;
    }
    system("pause");
    return 0;
}

