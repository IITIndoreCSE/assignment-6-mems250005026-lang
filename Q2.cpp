// Write a program in C++ to create a function called join that joins two smaller arrays and creates a larger one. The two small arrays should be passed as parameters in the function and the larger array should be returned.
#include <iostream>
using namespace std;


int* join(int arr1[], int size1, int arr2[], int size2){
    int* result = new int[size1 + size2];
    
  
    for (int i = 0; i < size1; i++) {
        result[i] = arr1[i];
    }
    
    
    for (int i = 0; i < size2; i++) {
        result[size1 + i] = arr2[i];
    }


    return result;
}

int main() {
    
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
  
    int* joinedArray = join(arr1, size1, arr2, size2);
    
  
    cout << "Joined Array: [";
    for (int i = 0; i < size1 + size2; i++) {
        cout << joinedArray[i];
        if (i < size1 + size2 - 1)
            cout << ", ";
    }
    cout << "]" << endl;

    int arr3[] = {10, 20};
    int arr4[] = {30, 40, 50};
    size1 = sizeof(arr3) / sizeof(arr3[0]);
    size2 = sizeof(arr4) / sizeof(arr4[0]);
    
    joinedArray = join(arr3, size1, arr4, size2);
    
    cout << "Joined Array: [";
    for (int i = 0; i < size1 + size2; i++) {
        cout << joinedArray[i];
        if (i < size1 + size2 - 1)
            cout << ", ";
    }
    cout << "]" << endl;

    
    delete[] joinedArray;

    return 0;
}























/* Test Case 1
Input:
Array1: [1, 2, 3]
Array2: [4, 5]
Output:
Joined Array: [1, 2, 3, 4, 5]
Test Case 2
Input:
Array1: [10, 20]
Array2: [30, 40, 50]
Output:
Joined Array: [10, 20, 30, 40, 50] */
