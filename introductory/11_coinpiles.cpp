#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long a, b;
        cin >> a >> b;
        string ans = ( ((a+b)%3==0 && 2*a>=b && 2*b>=a) ? "YES":"NO");
        cout << ans << "\n";
    }
}
