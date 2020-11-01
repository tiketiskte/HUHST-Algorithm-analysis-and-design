#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a, p, k;
ll qmi(ll m, ll k, ll p)
{
    ll res = 1 % p, t = m;
    while (k)
    {
        if (k&1) res = (res % p) * (t % p);
        t = (t % p)  * (t % p);
        k >>= 1;
    }
    return res % p;
}
int main(void) {
    while(scanf("%lld%lld%lld", &a, &p, &k) != EOF) {
        printf("%lld\n", qmi(a, p, k));
    }
    return 0;
}
