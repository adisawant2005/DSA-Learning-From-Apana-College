// function is a block of code that performs a specific task

// syntax ->
// return_type function_name (parameter_list) {
//     // body of the function
// }

// functions are stored in the memory in the call stack's stack frame

// C++ has 3 types of functions
// 1. Built in functions
// 2. User defined functions
// 3. Friend functions

//variable declaraed inside a function is not accessible outside as it's local variable

// function overloading is not possible in C++

// return statment is the last line of the function
// return type is optional
// after return statment no other code will be executed
// return statement pass the control to the calling function

// argument passing :-
// pass by value :: do not change the actual value
// fun(a, b)
// pass by reference :: change the actual value
// fun(&a, &b)

#include<iostream>
using namespace std;

// Add two numbers
int fun(int a, int b) {
    return a + b;
}

// factorial function
int fact(int a) {
    int fact = 1;
    for (int i = 0; i < a; i++) {
        fact *= i + 1;
    }
    return fact;
}

// Sum of Digits function :-
int digiSum(int a) {
    int digiSum = 0;
    while (a > 0) {
        digiSum += a % 10;
        a = a / 10;
    }
    return digiSum; 
}

// Calculate nCr binomial coefficient for n & r
// nCr = n! / (r! * (n-r)!)
int Cal_nCr_1(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int Cal_nCr_2(int n, int r) {
    int numerator = 1, denominator = 1, nCr;
    // n!/(n-r)!
    for(int j = (n - r + 1); j < (n + 1); j++) {
        numerator *= j;
    }
    // r!
    for(int j = 1; j < (r + 1); j++) {
        denominator *= j;
    }
    nCr = numerator / denominator;
    return nCr;
}

// main function
int main() {
    int a = 1123, b = 45;
    cout << fun(a, b) << endl;
    return 0;
}

// Summery

// 1. return, parameter, a
// 2. factorial, sum, binCoff, digitSum
// 3. memory allocatin of a function in memory
// 4. call by value

// H.W.
// Check prime number
// print Nth prime numbers
// Fibonacci series