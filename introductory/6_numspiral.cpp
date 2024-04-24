#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long number;
        long int y, x;
        cin >> y >> x;

       // look at the number of row or column
       // choose the biggest
        long int mx = max(y, x);
        long long z = mx * mx;

        // split to count from max values
        if (z % 2 == 0) {
            // this is for rows
            if (y >= x) {
                number = z - x + 1;
            }
            else {
                number = z - x - 1;
            }
         }
        else {
            number = z - y + 1;
        }
        cout << number << endl;
    }
    return 0;
}

// if we have y x => 1 1 => 1;
// if we have y x => 4 2 => 15;
// if inputs are => 3 5 => 25 - 3 + 1
// if we have y x => 1 2 => x**2 - x +1 = 4 - 2 + 1 = 3 (mistake! should be 2)
// The problem in my solution is I don't handle even columns and
// Max helps ass draw a mental diagonal upper-left to lower-right.
// I don't check here which mx it currently is, that's is why i can't
// come up with a solution. I try to deduct from the biggest line in the _| 
// shape, it requires to create a formular that depends both on x and y variables.
// It will be overhead to solve this way as I would also need to add solutions 
// when y x is not on the _| and is random.
// BEST WAY TO SOLVE IS: parity approach, and for two cases in rows and columns
// find relationships and create a formular. What is beautiful is that max method
// has helped us to divide a square into triangles and solve a problem
