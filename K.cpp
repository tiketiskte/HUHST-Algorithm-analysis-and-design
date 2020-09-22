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

int n, a[10];
int main(void)
{
    IOS
    cin >> n; 
    for(int i = 1; i <= n; i++) {
        int j = i;
        while(j) {
            a[j % 10]++;
            j /= 10;
        }
    }
    for(int i = 0; i < 10; i++) {
        cout << a[i] << endl;
    }
    system("pause");
    return 0;
}

