#include <iostream>
 
#define ll long long
 
using namespace std;
int n;
ll a[100];
int main() {
    cin >> n;
    int sum = 0;
    for(int i = 2; i <= n; i += 2) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}
