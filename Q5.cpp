// Write a program to populate a character array with letters of the alphabet at random; subsequently the letters in the array should be arranged alphabetically (without using the sort function).

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    const int SIZE = 10;
    char arr[SIZE];

    
    srand(time(0));


    for (int i = 0; i < SIZE; i++) {
        arr[i] = 'a' + rand() % 26;  
    }

    
    cout << "Random letters: [";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i];
        if (i < SIZE - 1) cout << ", ";
    }
    cout << "]" << endl;

    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    
    cout << "Sorted letters: [";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i];
        if (i < SIZE - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}




















/* Test Case 1
Input:
Random letters: ['m', 'g', 'x', 'a', 'p', 'b', 'f', 'q', 't', 'd']
Output:
Sorted letters: ['a', 'b', 'd', 'f', 'g', 'm', 'p', 'q', 't', 'x'] */
