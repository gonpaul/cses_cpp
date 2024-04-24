#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    string s;
    cin >> s;
    unordered_map<char, int> map;
 
    for (char ch : s) {
        if (map.find(ch) != map.end()) {
            map[ch]++; // Increment count of ch if it already exists in the map
        } else {
            map[ch] = 1; // Otherwise, set the count of ch to 1
        }
        int val = map[ch];
        cout << ch << " " << val << endl;
    }


    return 0;
}

