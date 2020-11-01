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
 
const int maxn = 100 + 5;
struct node {
    double weight, value, price;
}a[maxn];
bool cmp(node a, node b) {
    return a.price > b.price;
}
int k, w, s, cnt;
double sum;
int main(void) {
    IOS
    cin >> k;
    while(k--) {
        cnt = 0, sum = 0.0;
        cin >> w >> s;
        for(int i = 0; i < s; i++) {
            cin >> a[i].weight >> a[i].value;
            a[i].price = a[i].value * 1.0 / a[i].weight;
        }
        sort(a, a + s, cmp);
        while(w > 0 && cnt < s) {
            if(w >= a[cnt].weight) {
                sum += a[cnt].value;
                w -= a[cnt].weight;
                cnt++;
            } else {
                sum = sum + w * a[cnt].price;
                break;
            }
        }
        cout << fixed << setprecision(2) << sum << endl;
    }
    //system("pause");
    return 0;
}
