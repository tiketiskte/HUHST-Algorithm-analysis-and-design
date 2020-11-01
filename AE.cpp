#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 1000 + 10;
ll a[maxn];
int n, k;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    while(cin >> n >> k) {
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a,a + n);
        cout << a[k - 1] << endl;
        memset(a, 0, sizeof(a));
    }
    return 0;
}
