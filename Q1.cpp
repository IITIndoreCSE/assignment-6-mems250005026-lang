//Write a program in C++ with a function called add to add two complex numbers and another function called subtract to subtract one complex number from another. 
#include <iostream>
using namespace std;

// Function to add two complex numbers
void add(float r1, float i1, float r2, float i2, float &rSum, float &iSum) {
    rSum = r1 + r2;
    iSum = i1 + i2;
}

// Function to subtract two complex numbers
void subtract(float r1, float i1, float r2, float i2, float &rDiff, float &iDiff) {
    rDiff = r1 - r2;
    iDiff = i1 - i2;
}

int main() {
    float r1, i1, r2, i2;      // real and imaginary parts of inputs
    float rSum, iSum;          // for storing sum
    float rDiff, iDiff;        // for storing difference

    // Input from user
    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> r2 >> i2;

    // Function calls
    add(r1, i1, r2, i2, rSum, iSum);
    subtract(r1, i1, r2, i2, rDiff, iDiff);

    // Display results
    cout << "\nSum = " << rSum << " + " << iSum << "i" << endl;
    cout << "Difference = " << rDiff << " + " << iDiff << "i" << endl;

    return 0;
}
