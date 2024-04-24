#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long ans;
        long int y, x;
        cin >> y >> x;

       // look at the number of row or column
       // choose the biggest
        long int z = max(y, x);
        long long z2 = z * z;

        // split based on parity
        if (z%2==0) {
            if (z==y) {
               ans = z2 - x + 1;
            }
            else {
                ans = z2 - 2*z + y + 1;
            }
        }
        else {
            if (z==y) {
                ans = z2 - z - (z/2 * 2) + x;
            }
            else {
                ans = z2 -y +1;
            }
        }
        cout << ans << endl;

    }
    return 0;
}


