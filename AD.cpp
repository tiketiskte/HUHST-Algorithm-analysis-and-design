#include <bits/stdc++.h>
 
using namespace std;
 
int n, cnt;
void solve(int x) {
    int tmp = sqrt(x);
    cnt++;
    for(int i = 2; i <= tmp; i++) {
        if(x % i == 0) {
            solve(x / i);
            if(x / i != i) {
                solve(i);
            }
        }
    }
}
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    while(cin >> n) {
        cnt = 0;
        solve(n);
        cout << cnt << endl;
    }
    return 0;
}
