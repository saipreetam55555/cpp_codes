#include <iostream>
using namespace std;

// Global variables
float re = 0;  // Global real part
float im = 0;  // Global imaginary part

class Complex {
    // Local variables for real and imaginary parts in each object
    float re;  // Local real part
    float im;  // Local imaginary part

public:
    void set() {
        // Accessing the local 're' and 'im' variables
        cout << "Enter the real part of the complex number: ";
        cin >> re;
        cout << "Enter the imaginary part of the complex number: ";
        cin >> im;
    }

    void sum() {
        int n;
        cout << "How many complex numbers do you want to add? ";
        cin >> n;

        if (n <= 0) {
            cout << "Invalid number of complex numbers." << endl;
            return;
        }

        // Accessing the global 're' and 'im' variables
        for (int i = 0; i < n; ++i) {
            float tre; // Temporary local real part for user input
            float tim; // Temporary local imaginary part for user input
            
            cout << "Complex number " << i + 1 << ":- " << endl;
            
            cout << "Enter the real part of the complex number: ";
            cin >> tre;
            cout << "Enter the imaginary part of the complex number: ";
            cin >> tim;

            // Modifying the global 're' and 'im' using :: to indicate the global scope
            ::re = ::re + tre;  // Access global 're' to sum with user input
            ::im = ::im + tim;  // Access global 'im' to sum with user input
        }
    }

    void display() {
        if (im > 0)
            cout << re << " + " << im << "i" << endl;
        else if (im == 0)
            cout << re << endl;
        else
            cout << re << " - " << -im << "i" << endl;
    }
};

int main() {
    Complex c;
    int n;
    cout << "If do you want only one complex number (press '0') or do you want to add the complex numbers (press'1') ? ";
    cin >> n;
    
    if (n == 0) {
        c.set();
        c.display();
        return 0;
    }
    else if (n == 1) {
        c.sum(); 
        cout << "The total sum of the complex numbers is ";
        c.display();
        return 0;
    }
    else if (n < 0) {
        cout << "Invalid" << endl;
        return 0;
    }
}

