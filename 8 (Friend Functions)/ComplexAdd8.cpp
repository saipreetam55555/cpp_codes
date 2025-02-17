#include <iostream>
using namespace std;

class Complex 
{
    float re, im; // Real and imaginary parts of the complex number

public:
    // Constructor to initialize real and imaginary parts
    Complex() 
    {
       re = 0;
       im = 0;
    }
    
    // Friend function to add two complex numbers
    friend Complex addComplex(const Complex &c1, const Complex &c2);
    
    // Function to input complex numbers
    void input();
    
    // Function to display complex number
    void display();
};

// Function to take user input for a complex number
void Complex::input() 
{
    cout << "Enter the real part of complex number: ";
    cin >> re;
    cout << "Enter the imaginary part of complex number: ";
    cin >> im;
}

// Function to display a complex number
void Complex::display() 
{
    if (im >= 0)
        cout << re << " + " << im << "i" << endl;
    else
        cout << re << " - " << -im << "i" << endl;
}

// Friend function to add two complex numbers
Complex addComplex(const Complex &c1, const Complex &c2)
{
    Complex sum;
    sum.re = c1.re + c2.re; // Adding real parts
    sum.im = c1.im + c2.im; // Adding imaginary parts
    return sum;
}

int main() 
{
    int n;
    cout << "How many complex numbers do you want to add? ";
    cin >> n;

    if (n <= 0) 
    {
        cout << "Invalid number of complex numbers." << endl;
        return 1;
    }
    
    else
    {
    	Complex total;
	    Complex temp;

        for (int i = 0; i < n; i++) 
        {
            cout << "Complex number " << i + 1 << " :-" << endl;
            temp.input();
            total = addComplex(total, temp); // Using friend function to add
        }

        cout << "The total sum of the complex numbers is: ";
        total.display();
	}

    return 0;
}

