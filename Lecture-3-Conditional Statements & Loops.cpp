#include<iostream>
using namespace std;

int main(){

    // Conditional Statements
    // 1. if - else
    // 2. if - else if - else
    // 3. switch

    // Loops
    // 1. while
    // 2. do - while
    // 3. for

    // writing conventions
    // 1. camelCase - first letter is lowercase
    // 2. pascalCase - first letter is uppercase

    // break and continue statement
    // 1. break - to terminate the loop
    // 2. continue - to skip the current iteration

    // Can't use keywords as variable names
    // Example - if, else, while, do-while, for, switch, break, continue, default, case, etc.


    // Nested Loops
    int n = 5;
    for(int i = 0; i < n; i++){
        cout << string(n - i, ' ');
        for (int j = 0; j < i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

// 1. if - else
//1.// int age;
    // cout << "Enter your age : ";
    // cin >> age;

    // if(age >= 18){
    //     cout << "You can vote\n";
    // } else if(age < 18 && age > 0){
    //     cout << "You can vote after " << 18 - age << " years\n";
    // } else{
    //     cout << "Enter a valid age\n";
    // }

//2.// if(ch >= 'a' && ch <= 'z'){
//1.//     cout << "Lowercase\n";
    // } else if(ch >= 'A' && ch <= 'Z'){
    //     cout << "Uppercase\n";
    // } else if(ch >= '0' && ch <= '9'){
    //     cout << "Digit\n";
    // } else{
    //     cout << "Special Character\n";
    // }

    
//2.// if(ch >= 97 && ch <= 122){
    //     cout << "Lowercase\n";
    // } else if(ch >= 65 && ch <= 90){
    //     cout << "Uppercase\n";
    // } else if(ch >= '0' && ch <= '9'){
    //     cout << "Digit\n";
    // } else{
    //     cout << "Special Character\n";
    // }


//3.// int num;
    // cout << "Enter a number : ";
    // cin >> num;
    // cout << (num % 2 == 0 ? "Even" : "Odd") << endl;

    
// Loops
// 1. while
    // int count;
    // cout << "Enter number of iterations : ";
    // cin >> count;
    // while(count-- > 0){
    //     cout << count << " ";
    // }

// 2. do - while
    // do {
    //     cout << "Hello World\n";
    // } while (3 > 5);


// 3. for
//1.// for (int i = 0, j = 5; i < 5; i++, j--) {
    //     cout << i << " ";
    //     cout << j << " ";
    // }

//2.// int sum = 0;
    // for(int i = 1; i <= 500; i++){
    //     sum += i;
    //     if (i == 100){
    //         cout << "i = " << i << endl;
    //         break;
    //     } 
    // }
    // cout << "sum = " << sum << endl;

//3.// int oddSum = 0;
    // for (int i = 0; i <= 5; i++) {
    //     if (i % 2 != 0) {
    //         oddSum += i;
    //     } 
    // }
    // cout <<"Odd Sum = " << oddSum << endl;

//4.1// bool isPrime = true;
    // int n;
    // cout << "Enter a number : ";
    // cin >> n;
    // for (int i = 2; i < n; i++){
    //     if (n % i == 0){
    //         isPrime = false;
    //         break;
    //     }
    // }
    // if(isPrime){
    //     cout << "Prime Number\n";
    // } else{
    //     cout << "Not Prime Number\n";
    // }
      
//4.2// bool isPrime = true;
    // int n;
    // cout << "Enter a number : ";
    // cin >> n;
    // for (int i = 2; i * i < n; i++){
    //     if (n % i == 0){
    //         isPrime = false;
    //         break;
    //     }
    // }
    // if(isPrime){
    //     cout << "Prime Number\n";
    // } else{
    //     cout << "Not Prime Number\n";
    // }