
#include <iostream>

using namespace std;

int main() {
    long int n;
    cin >> n;
    long long leftover = n*(n+1)/2;
    for (int i = 1; i < n; ++i) {
        int num;
        cin >> num;
        leftover-=num;
    }
    cout << leftover;

    return 0;
}
