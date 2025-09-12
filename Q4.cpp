// Write a program that populates an integer array, goes through it step by step and searches for a given number entered by the user. If the number is found, it should print “found” and return the position of the number; otherwise print “not found”.







#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 3, 5, 7, 9};  
    int n = sizeof(arr) / sizeof(arr[0]);  

    
    int search;
    cout << "Enter the number to search: ";
    cin >> search;

    
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            cout << "Found at position: " << i << endl;
            found = true;
            break;
        }
    }

    
    if (!found) {
        cout << "Not found" << endl;
    }

    return 0;
}




















/* Test Case 1
Input:
Array: [1, 3, 5, 7, 9]
Search: 5
Output:
Found at position: 2
Test Case 2
Input:
Array: [2, 4, 6, 8]
Search: 7
Output:
Not found */

