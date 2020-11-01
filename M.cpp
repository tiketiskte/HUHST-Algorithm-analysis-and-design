#include <iostream>
 
using namespace std;
const int maxn = 65;
int k, a[maxn][maxn];
void Merge(int n) {
    int m = n / 2;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            a[i][j + m] = a[i][j] + m;
            a[i + m][j] = a[i][j + m];
            a[i + m][j + m] = a[i][j];
        }
    }
}
void solve(int n) {
    if(n == 1) {
        a[0][0] = 1;
        return ;
    }
    solve(n / 2);
    Merge(n);
}
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> k;
    int qwq = 1 << k;
    solve(qwq);
    for(int i = 0; i < qwq; i++) {
        for(int j = 0; j < qwq; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
