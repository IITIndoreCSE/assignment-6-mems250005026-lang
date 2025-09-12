#include <iostream>
using namespace std;

// Define a Complex class
class Complex {
public:
    // Member variables to store real and imaginary parts
    float real, imag;

    // Constructor to initialize complex number
    Complex(float r = 0.0, float i = 0.0) : real(r), imag(i) {}

    // Function to add two complex numbers
    Complex add(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    // Function to subtract one complex number from another
    Complex subtract(const Complex& other) {
        return Complex(real - other.real, imag - other.imag);
    }

    // Function to display complex number in the form a + bi
    void display() const {
        if(imag < 0)
            cout << real << " - " << -imag << "i" << endl;
        else
            cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    // Declare two complex numbers
    Complex num1(3.0, 2.0), num2(1.0, 4.0);

    // Display the original complex numbers
    cout << "Complex Number 1: ";
    num1.display();
    cout << "Complex Number 2: ";
    num2.display();

    // Add the two complex numbers
    Complex sum = num1.add(num2);
    cout << "Sum: ";
    sum.display();

    // Subtract the two complex numbers
    Complex diff = num1.subtract(num2);
    cout << "Difference: ";
    diff.display();

    return 0;
}
