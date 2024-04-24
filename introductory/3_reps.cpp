#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    long long ans=1, c = 1;
    
    for (long int i = 0; i < s.size() - 1; ++i){
       if (s[i] == s[i + 1]) {
           c++;
           ans = max(c, ans);
       }
       else {
           c = 1;
       }
    }

//    char l='A';
//    for(char d : s) {
//        if(d == l) {
//            ++c;
//            and = max=(c, ans);
//        }
//        else {
//            l=d;
//            c=1;
//        }
//    }
    cout << ans;
    return 0;
}
