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
  
const int maxn = (1 << 10) + 5;
int n,Map[maxn][maxn];
int x, y;
int t = 1;
void solve(int row, int column, int x, int y, int Size) {
    if(Size == 1){
        return;
    }
    int s = Size / 2;
    int cnt = t++;
    if(x < (row + s) && y < (column + s)) {
        solve(row, column, x, y, s);
    } else {
        Map[row + s - 1][column + s - 1] = cnt;
        solve(row, column, row + s - 1, column + s - 1, s);
    }
    if(x < (row + s) && y >= (column + s)) {
        solve(row, column + s, x, y, s);
    } else {
        Map[row + s - 1][column + s] = cnt;
        solve(row, column + s, row + s - 1, column + s, s);
    }
    if(x >= (row + s) && y < (column + s)) {
        solve(row + s, column, x, y, s);
    } else {
        Map[row + s][column + s - 1] = cnt;
        solve(row + s, column, row + s, column + s - 1, s);
    }
    if(x >= (row + s) && y >= (column + s)) {
        solve(row + s, column + s, x, y, s);
    } else {
        Map[row + s][column + s] = cnt;
        solve(row + s, column + s, row + s, column + s, s);
    }
}
int main(void)
{
    IOS
    cin >> n >> x >> y;
    solve(1, 1, x, y, (1 << n));
    for(int i = 1; i <= (1 << n); i++) {
        for(int j = 1; j <= (1 << n); j++) {
            cout << Map[i][j] << " ";
        }
        cout << endl;
    }
    // system("pause");
    return 0;
}
