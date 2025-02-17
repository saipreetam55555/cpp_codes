#include <iostream>
using namespace std;

class Complex 
{
    float re, im; // Real and imaginary parts

public:
    // Default constructor
    Complex() 
    {
        re = 0;
        im = 0;
    }
    
    // Parameterized constructor
    Complex(float r, float i) 
    {
        re = r;
        im = i;
    }
    
    // Copy constructor
    Complex(const Complex &c) 
    {
        re = c.re;
        im = c.im;
    }

    // Function to add multiple complex numbers
    void sum() 
    {
        int n;
        cout << "How many complex numbers do you want to add? ";
        cin >> n;

        if (n <= 0) 
        {
            cout << "Invalid number of complex numbers." << endl;
            return;
        }

        re = 0;
        im = 0;
        for (int i = 0; i < n; i++)  
        {
            float tre, tim;
            cout << "Complex number " << i + 1 << ":- " << endl;
            cout << "Enter the real part of the complex number: ";
            cin >> tre;
            cout << "Enter the imaginary part of the complex number: ";
            cin >> tim;

            re += tre;
            im += tim;
        }
    }

    void display(); // Function prototype
};

// Inline function to display complex number
inline void Complex :: display() 
{
    if (im >= 0)
        cout << re << " + " << im << "i" << endl;
    else
        cout << re << " - " << -im << "i" << endl;
}
 
int main() 
{
    // Using default constructor
    Complex co;
    
    co.sum(); // Perform sum operation
    cout << "The total sum of the complex numbers is ";
    co.display();

    // Using parameterized constructor
    Complex c1(3.5, -2.5);
    cout << "A complex number initialized using parameterized constructor: ";
    c1.display();

    // Using copy constructor
    Complex c2(c1);
    cout << "A complex number initialized using copy constructor: ";
    c2.display();
    
    return 0;
}

