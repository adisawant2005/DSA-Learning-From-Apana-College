#include <iostream>
using namespace std;

// Miscellaneous Concepts :-
// Bitwise Operators, Data Type Modifiers & more

// Bitwise Operators --> Perform Bit - Wise operations
// 1. & --> AND
// 2. | --> OR
// 3. ^ --> XOR
// 5. << --> Left Shift
// 6. >> --> Right Shift
// 4. ~ --> NOT

// int a = 3;      // 011
// int b = 7;      // 111
// int c = a & b;  // 011 & 111 = 011
// int d = a | b;  // 011 | 111 = 111
// int e = a ^ b;  // 011 ^ 111 = 100
// int f = a << 1; // 011 << 1 = 110 // --> a * (2 ** b)
// int g = a >> 1; // 011 >> 1 = 001 // --> a / (2 ** b)
// int h = ~a;     // ~011 = 100
// cout << "Bitwise Operations on 3 & 7 :- " << endl;
// cout << "AND          " << c << endl;
// cout << "OR           " << d << endl;
// cout << "XOR          " << e << endl;
// cout << "Left Shift   " << f << endl;
// cout << "Right Shift  " << g << endl;
// cout << "NOT         " << h << endl;

// Operators Precedence
// 1. ! , + , -  (unaryOperator) --> R to L
// 2. * , / , %  --> L to R
// 3. + , -  --> L to R
// 4. << , >>  --> L to R
// 5. < , <= , >= , >  --> L to R
// 6. == , !=  --> L to R
// 7. == , !=  --> L to R
// 8. & --> L to R
// 9. ^  --> L to R
// 10. |  --> L to R
// 11. &&  --> L to R
// 12. ||  --> L to R
// 13. = , += , -= , *= , /= , %= , <<= , >>= , &= , ^= , |=  --> L to R

// To OverWrite Operators Precedence Use Parenthesis

// Scope
// 1. Global --> Global Scope --> Can be accessed from anywhere
// 2. Local --> Local Scope --> Can be accessed only inside the block --> {}

// Data Type Modifiers
// 1. signed --> eg: signed int Num
// 2. unsigned --> eg: unsigned int ID // will not store negative values but will store unknown positive integer
// 3. short --> eg: short int Age
// 4. long --> eg: long int UUID // will increase data size
// 5. long long --> eg: long long int ID
// 8. long double --> eg: long double Num

int main()
{

    return 0;
}

// H.W. :-

// Check if a num is a power of 2.
// bool isPow2(int n){
//     if(n <= 0){
//         return false;
//     }
//     return (n & (n - 1)) == 0;
// }

// WAF to reverse a Integer n.
// int ReverseInt(int n)
// {
//     int ans = 0;
//     while (n > 0)
//     {
//         ans = n % 10 + ans * 10;
//         n /= 10;
//     }
//     return ans;
// }