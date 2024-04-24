#include <iostream>

using namespace std;

int main() {
    long int n;
    cin >> n;
    if (n < 4 && n !=1) {
        cout << "NO SOLUTION";
        return 0;
    }
    for (long int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    for (long int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }
    return 0;    
}

