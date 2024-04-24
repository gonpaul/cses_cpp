#include <iostream>
#include <vector>

using namespace std;

int main() {
    long int n;
    cin >> n;

    if (n*(n+1)/2%2) {
        cout << "NO";
        return 0;
    }
    vector<int> v1, v2;
    int offset = 0;
    if (n % 4) {
        offset=3;
    } else {
        offset=4;
    }
    // n = 0, 3 mod 4 
    for(int i=0; i<(n-1)/4; ++i) {
       v1.push_back(4*i + 1 + offset);
       v1.push_back(4*i + 4 + offset);
       v2.push_back(4*i + 2 + offset);
       v2.push_back(4*i + 3 + offset);

    }
    if (n%4) {
        v1.push_back(1);
        v1.push_back(2);
        v2.push_back(3);
    } else {
        v1.push_back(1);
        v1.push_back(4);
        v2.push_back(2);
        v2.push_back(3);
    }

    cout << "YES\n";
    cout << v1.size() << "\n";
    for (int i : v1) {
        cout << i << " ";
    }
    cout << "\n";
    cout << v2.size() << "\n";
    for (int i : v2) {
        cout << i << " ";
    }
    cout << "\n";
}
