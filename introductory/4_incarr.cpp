#include <iostream>

using namespace std;

int main() {
    long long maxn = 0, sum = 0;
    long n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        long long num;
        cin >> num;
        maxn = max(maxn, num);
        sum += maxn - num;
    }
    cout << sum;

    return 0;    
}
