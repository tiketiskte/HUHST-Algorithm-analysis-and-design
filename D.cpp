#include <iostream>
 
#define ll long long
 
using namespace std;
int n;
ll a[100];
void solve() {
    a[1] = a[2] = 1;
   for(int i = 3; i <= 100; i++) {
        a[i] = a[i - 1] + a[i - 2];
   }
}
int main() {
    cin >> n;
    if(n == 0) {
        cout << 0 << endl;
        return 0;
    }
    solve();
    cout << a[n] <<endl;
    return 0;
}
