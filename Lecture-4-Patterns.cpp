#include<iostream>
using namespace std;

//Just Logic about inner loop & outer loop

//Spuare pattern
// 1234
// 1234
// 1234
// 1234

// triangle pattern / pyramid pattern
// *
// **
// ***
// ****
// 1
// 12
// 123
// 1234

//Reverse triangle pattern
// 1
// 21
// 321
// 4321

//Pyramid pattern
//    *
//   * * 
//  * * *
// * * * *
//      1
//    1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n - i; j++){
    //         cout << "  ";
    //     }
    //     for (int j = 0; j < i + 1; j++){
    //         cout << j + 1 << " ";
    //     }
    //     for (int j = i; j > 0; j--){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

// Floyd's Triangle
// 1
// 2 3
// 4 5 6
// 7 8 9 10

// Invertered Triangle 
// 1 1 1 1
//   2 2 2
//     3 3
//       4
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < i; j++){
    //         cout << " ";
    //     }
    //     for (int j = 0; j < n - i; j++){
    //         // cout << j + 1; // op- 1 2 3 4
    //         // cout << i + 1; // op- 1 1 1 1
    //         cout << i + 1 << " "; // op- Inverted Pyramid
    //     }
    //     cout << endl;
    // }

// Diamond Pattern
//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n - i - 1; j++){
    //         cout << " ";
    //     }
    //     cout << "*";
    //     for (int j = 0; j < 2*i - 1; j++){
    //         cout << " ";
    //     }
    //     if (i != 0){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = n - 2; i >= 0; i--){
    //     for (int j = 0; j < n - i - 1; j++){
    //         cout << " ";
    //     }
    //     cout << "*";
    //     for (int j = 0; j < 2*i - 1; j++){
    //         cout << " ";
    //     }
    //     if (i != 0){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

// Butterfly Pattern
// *      *
// **    **
// ***  ***
// ********
// ***  ***
// **    **
// *      *
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < i + 1; j++){
    //         cout << "*";
            
    //     }
    //     for (int j = 0; j < 2*(n - i - 1); j++){
    //         cout << " ";
    //     }
    //     for (int j = 0; j < i + 1; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < n; i++){
    //     for (int j = n - i; j > 0; j--){
    //         cout << "*";
            
    //     }
    //     for (int j =2*(n - 1); j > 2*(n - i - 1); j--){
    //         cout << " ";
    //     }
    //     for (int j = n - i; j > 0; j--){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }



int main(){
    int n = 4;

    return 0;
}

