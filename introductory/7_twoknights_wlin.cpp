#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        // Number of ways two knights
        // can be placed on a chessboard so
        // that they do not attack each other
        long long all=i*i, ways=all*(all-1)/2;
        if (i > 2) {
            ways-=4*(i-1)*(i-2);
        }
        cout << ways << endl;
    }
}
