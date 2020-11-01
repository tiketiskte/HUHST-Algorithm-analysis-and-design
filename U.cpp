#include <bits/stdc++.h>
 
using namespace std;
const int maxn = 1000 + 10;
int n;
int dp[maxn][maxn];
 
string s1, s2;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    while(n--) {
        cin >> s1 >> s2;
        int l1 = s1.length(), l2 = s2.length();
        for(int i = 0; i < l1; i++) {
            for(int j = 0; j < l2; j++) {
                if(s1[i] == s2[j]) {
                    dp[i + 1][j + 1] = dp[i][j] + 1;
                } else {
                    dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
                }
            }
        }
        cout << dp[l1][l2] << endl;
        memset(dp, 0, sizeof(dp));
    }
    return 0;
}
 
