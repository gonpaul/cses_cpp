#include <iostream>

using namespace std;


bool inProgression(long int n) {
    for (int i = 1; i < n/3; i++) {
        if (n == (3 + 4 * i)) {
            return true;
        }
        if (n == 3 | n == 4) {
            return true;
        }
    }
    return false;
}

int main() {
    long int n;
    cin >> n;
    // working algorithm only for odd nums
    // 3 7 11 15 19
    if (n < 3) {
        cout << "NO\n";
        return 0;
    }
    if (inProgression(n)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
        return 0;
    }
    long int asize = n/2 + 1;
    long int bsize = n - asize;
    cout << asize << endl;
    cout << 1 << " " << 2 << " ";
    for (int i=4; i<=n; i+=4) {
        cout << i << " ";
    }    
    for (int i=7; i<=n; i+=4) {
        if (i == n) {
            cout << i << endl;
            break;
        }
        cout << i << " ";
    }    
    
    cout << bsize << endl;
    cout << 3 << " ";
    for (int i=5; i<=n; i+=4) {
        cout << i << " ";
    }    
    for (int i=6; i<=n; i+=4) {
        if (i == n) {
            cout << i << endl;
            break;
        }
        cout << i;
    }    
    return 0;
}
