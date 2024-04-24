## This is a file of the things I learned from doing cses 150 problem set

### Rules
    1. Focus on patterns
    2. Think of how to improve your code
    3. Does your code reads nice? Is it fast? Does it require a lot of memory?

### New knowledge
1. When does std::cin receives characters from one line
    and when it moves to the next line?
    5
    2 3 1 5
    Answer: std::cin moves to the next line after reading each whitespace-separated input, including newline characters. 
        If you want to read a whole line including spaces, you can use std::getline(std::cin, variable) function.  

2. for(char d : s) {} => is same as forOf in Javascript
3. use char for one storing one symbol, use string to store a group of chars
6. BEST WAY TO SOLVE IS: parity approach, and for two cases in rows and columns
    find relationships and create a formular. What is beautiful is that max method
    has helped us to divide a square into triangles and solve a problem
    - It was interesting that dividing integers using a slash (/) automatically
    performs integer division, which means that it cancels the remainder.

7. Two knights. It is a perfect exercise to test understanding of probability theory and permutations.
    At first I didn't know why use 4(number of permutations where two knights can attack each other
    in a 2 by 3 table) * (n - 1) * (n - 2) where n is the length of a square's side.
    When you start to go from easy or obvious case to more complex (higher n), you can place
    this table n-1 times in a column and n-2 in the the row, if n is >= then max(x, y) of the space(table)
    needed for permutations. 
    By solving this problem I learned a pattern for a solution of chessboard permutations.
        A good addition will be to solve a similar problem but with bishops


8. Two sets. I was not able to fully solve it, so I looked up the solution.
    A cool thing to notice is that the pattern:
    1. Splitting the solution based on the result of (mod4) which is the remainder after dividing by 4.
    2. Deducting 1 from the loop condition to consider offset, and condition the offset based on the n mod 4
    3. Use for(int i : v1) same as for (const i of array) in js

9. Bit strings. Applying modulo operation inside a for loop when intermidiate results occur.
    It helps mitigate the risk of incorrect behavior with large number (integer overflow)
    to represent a 10 to the power of n the next expression can be used
        => (int)1eN it reads like integer 
        Putting it all together, (int)1eN reads as "convert the floating-point number 
            1 times 10 to the power of N into an integer."
            - (int) is a type cast, it converts a floating point number that follows it.

10. Trailing zeros in factorial. We basicly look how much integers left after dividing n by 5;
    it works because in 1 2 3 4 5 6 7 8 9 10 multiplication (5 * 2) contributes to 1 trailing zero
    And it just so happens that 10 also contributes to a trailing zero, that's why the beautify 
    of the formular is vivid: just take 10/5 and it will consider both trailing zeros.
    why 5 25 125 in the loop?

11. Coin Piles.
    It turns out that c++ has ternary conditional operator which is cool.
    but don't forget to ensure that both branches of the ternary conditional
    operator return the same type, i.e, string or int.
        string ans = ( ((a+b)%3==0 && 2*a>=b && 2*b>=a) ? "YES" : "NO");

### yandex contest
#### useful methods
    1. std::string
        1. std::string::npos - no position
            - is used in combination with string.find(ch) - return position
            Ex: result += j.find(ch) != string::npos;


    2. std:::

