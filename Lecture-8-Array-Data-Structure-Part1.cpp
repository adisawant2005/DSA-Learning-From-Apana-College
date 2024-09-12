// # Array :-
// stores same data types
// contiguous block of memory
// Linear Data Structure ( LDS )

// Creating OR Initializing Array
// eg --> int marks[5]; --> here size = 5
// --> string colours[12] = { "red", "green", "yellow" } --> here size will remain = 12
// --> double marks[] = { 98.98, 89.45, 54.86 } --> here size will be = 3

// Accessing Array
// cout << marks[2] << endl; // here we are accessing the array element at 3rd position as the index starts from 0

// The range of index is 0 to (size - 1)
// Trying to access the elements out of range will give error
// eg :- marks[12] --> out of range

// For getting the size of an array DO :-
// int size = sizeof(marks) / sizeof(marks[0]);
// Or if you know the data type of the array
// int size = sizeof(marks) / sizeof(int);

// For looping the array
// For outping the data of the array
// for (int i = 0; i < size; i++){
//     cout << marks[i] << endl;
// }
//
// For inputting the data of the array
// for (int i = 0; i < size; i++){
//     cin >> marks[i];
// }

// eg of MAX and MIN of int data type
// cout << INT_MAX << endl;
// cout << INT_MIN << endl;

// Finding Largest and Smallest Element

// int marks[] = {97, 98, 89, 45, 54, 86};

// int size = sizeof(marks) / sizeof(marks[0]);
// int max = INT_MIN;
// int min = INT_MAX;
// for (int i = 0; i < size; i++)
// {
//     if (marks[i] > max)
//     {
//         max = marks[i];
//     }
// // OR max = max(marks[i], max);
//     if (marks[i] < min)
//     {
//         min = marks[i];
//     }
// // OR min = min(marks[i], min);
// }
// cout << "Max = " << max << endl;
// cout << "Min = " << min << endl;

// Finding the index of max & min in an array
// int marks[] = {97, 98, 89, 45, 54, 86};
// int size = sizeof(marks) / sizeof(marks[0]);
// int max = INT_MIN;
// int min = INT_MAX;
// int maxIndex = -1;
// int minIndex = -1;
// for (int i = 0; i < size; i++)
// {
//     if (marks[i] > max)
//     {
//         max = marks[i];
//         maxIndex = i;
//     }
//     if (marks[i] < min)
//     {
//         min = marks[i];
//         minIndex = i;
//     }
// }
// cout << "Max = " << max << endl;
// cout << "Min = " << min << endl;
// cout << "Max Index = " << maxIndex << endl;
// cout << "Min Index = " << minIndex << endl;

// Pass by reference --> Array is passed to the function by reference --> Array name is implicitly a pointer
// void changeArray(int arr[], int size){
//     cout << "In Function" << endl;
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = 2 * arr[i];
//     }
// }

// int main()
// {
//     int marks[] = {97, 98, 89, 45, 54, 86};
//     int size = sizeof(marks) / sizeof(marks[0]);
//     changeArray(marks, size);

//     cout << "In Main" << endl;
//     for (int i = 0; i < size; i++){
//         cout << marks[i] << endl;
//     }
//     return 0;
// }

// Linear Search :-
// Here we loop through the array and check if the element is present or not
// If it is present return the index else return -1

// Reverse an array
// simply keep swapping (i) & (size - i) elements of the array in each iteration i.e. keep swapping the start and end element
// Here there can be a time where start is equal to end and we need to stop the loop there
// swap eg :-
// int swap(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

#include <iostream>
using namespace std;

int main()
{
    return 0;
}

// H.W.

// WAF to calulate sum & product of all numbers in an array --> Easy
// WAF to swap the max and min element in an array --> Easy
// WAF to print all the unique values in an array --> Use Nested Loop --> Complexity O(NlogN)
// WAF to print intersection of two arrays --> Use Nested Loop