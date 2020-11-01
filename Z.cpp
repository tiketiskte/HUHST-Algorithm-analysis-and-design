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
 
const int maxn = 200 + 5;
char a[maxn];
int k;
int main(void) {
    IOS
    while(cin >> a >> k && a != "0") {
        int len = strlen(a);
        while(k--) {
            int i = 0, j;
            while(i < len - 1 && a[i] <= a[i + 1]) {
                i++;
            }
            if(i == len - 1) {
                len--;
                while(k--) {
                    len--;
                }
                break;
            } else {
                for(j = i; j < len - 1; j++) {
                    a[j] = a[j + 1];
                }
                len--;
            }
        }
        for(int z = 0; z < len; z++) {
            cout << a[z];
        }
        cout << endl;
        memset(a, '0', sizeof(a));
    }
    //system("pause");
    return 0;
}
