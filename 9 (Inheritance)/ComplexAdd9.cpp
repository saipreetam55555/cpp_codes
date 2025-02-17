#include <iostream>
using namespace std;

// Base class
class Number 
{
	
protected:
    float re, im; // Protected members to allow derived class access
    
public:
	// Constructor to initialize real and imaginary parts
    Complex() 
    {
       re = 0;
       im = 0;
    }
};

// Derived class inheriting from Number
class Complex : public Number
{

public:
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

        for (int i = 0; i < n; i++)  
        {
            float tre, tim; 
            
            cout << "Complex number " << i + 1 << ":- " << endl;
            cout << "Enter the real part of the complex number: ";
            cin >> tre;
            cout << "Enter the imaginary part of the complex number: ";
            cin >> tim;

            re = re + tre;
            im = im + tim;
        }
    }

    void display(); // Function prototype
    
};

// Inline function to display the result
inline void Complex::display() 
{
    if (im >= 0)
        cout << re << " + " << im << "i" << endl;
    else
        cout << re << " - " << -im << "i" << endl;
}
 
int main() 
{
    Complex co; // Creating an object of Complex class
    
    co.sum(); // Calling sum function to add complex numbers
    
    cout << "The total sum of the complex numbers is ";
    co.display(); // Displaying the result
    
    return 0;
}

