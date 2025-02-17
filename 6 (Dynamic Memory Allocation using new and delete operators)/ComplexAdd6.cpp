#include <iostream>
using namespace std;

class Complex 
{
    float *re; // Pointer for real part
    float *im; // Pointer for imaginary part

public:
    // Constructor to allocate memory dynamically
    Complex() 
    {
        re = new float(0); // Allocating memory for real part
        im = new float(0); // Allocating memory for imaginary part
    }
    
    // Function to take input and sum complex numbers
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

            *re += tre; // Updating the real part
            *im += tim; // Updating the imaginary part
        }
    }

    // Function to display the sum
    void display()
    {
        if (*im >= 0)
            cout << *re << " + " << *im << "i" << endl;
        else
            cout << *re << " - " << -*im << "i" << endl;
    }

    // Destructor to free dynamically allocated memory
    ~Complex() 
    {
        delete re; // Freeing memory for real part
        delete im; // Freeing memory for imaginary part
    }
};
 
int main() 
{
    Complex co;
    co.sum(); 
    cout << "The total sum of the complex numbers is ";
    co.display();
    return 0;
}

