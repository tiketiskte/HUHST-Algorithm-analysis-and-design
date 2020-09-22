#include <iostream>
 
#define ll long long
 
using namespace std;
int n;
ll solve(int n) {
    if(n == 0) {
        return 1;
    }
    return n * solve(n - 1);
}
int main() {
    while(cin >>n) {cout << solve(n) << endl;}
    return 0;
}
 
