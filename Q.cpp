/**
* Copyright(c)
* Author : tiketiskte
**/
#include <iostream>
#include <cstdio>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <deque>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <map>
#include <stack>
#include <set>
#define IOS {ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
#define PII pair<int, int>
#define PLL pair<ll, ll>
#define PDD pair<double, double>
#define sqr(x) (x) * (x)
#define SZ(X) (int)X.size()
#define INF 0x3f3f3f3f
using namespace std;
 
const int PRIME = 151;
const ll MOD = 1e9 + 7;
const int  MAXN = 1e3 + 5;
const int INF = 0x3f3f3f3f;
 
int n;
string s;
struct mat {
    ll row, column;
}ch[MAXN];
 
int main () {
    IOS()
    while (cin >> n) {
        int Max = -1;
        for (int i = 1; i <= n; ++i) {
            char c;
            cin >> c;
            cin >> ch[c - 'A'].row >> ch[c - 'A'].column;
            Max = max(c - 'A', Max);
        }
        cin >> s;
 
        ll ans = 0;
        bool f = false;
        stack<int> stk;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(') stk.push(-1);
            else if (s[i] == ')') {
                string tt;
                while (stk.top() != -1) {
                    tt += stk.top();
                    stk.pop();
                }
                stk.pop(), reverse(tt.begin(), tt.end());
                ll r = ch[tt[0]].row, c = ch[tt[0]].column;
 
                for (int j = 0; j < tt.length() - 1; ++j) {
                    ll tr = ch[tt[j + 1]].row;
                    ll tc = ch[tt[j + 1]].column;
                    if (tr != c) { f = true; break; }
                    ans += c * r * tc;
                    c = tc;
                }
 
                ch[++Max].row = r, ch[Max].column = c;
                stk.push(Max);
            }
            else stk.push(s[i] - 'A');
            if (f) break;
        }
 
        if (f) { cout << "error\n"; return 0; }
 
        string tt;
        while (! stk.empty()) {
            tt += stk.top();
            stk.pop();
        }
        reverse(tt.begin(), tt.end());
        ll r = ch[tt[0]].row, c = ch[tt[0]].column;
        for (int j = 0; j < tt.length() - 1; ++j) {
            ll tr = ch[tt[j + 1]].row;
            ll tc = ch[tt[j + 1]].column;
            if (tr != c) { f = true; break; }
            ans += c * r * tc;
            c = tc;
        }
        if (f) { cout << "error\n"; return 0; }
 
        cout << ans << '\n';
 
        memset(ch, 0, sizeof(ch));
    }
    return 0;
}
