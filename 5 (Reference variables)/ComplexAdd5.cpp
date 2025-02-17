#include <iostream>
using namespace std;

int main() 
{
    float re = 0, im = 0; // Initialize real and imaginary parts
    int n;
    
    // Ask user if they want to input a single complex number or sum multiple
    cout << "If you want only one complex number (press '0') or do you want to add complex numbers (press '1')? ";
    cin >> n;

    if (n == 0) 
	{
        // Input a single complex number
        cout << "Enter the real part of the complex number: ";
        cin >> re;
        cout << "Enter the imaginary part of the complex number: ";
        cin >> im;

        // Display the single complex number
        if (im > 0)
            cout << re << " + " << im << "i" << endl;
        else if (im == 0)
            cout << re << endl;
        else
            cout << re << " - " << -im << "i" << endl;
    }
    else if (n == 1) 
	{
        // Sum multiple complex numbers
        cout << "How many complex numbers do you want to add? ";
        cin >> n;

        if (n <= 0) {
            cout << "Invalid number of complex numbers." << endl;
            return 0;
        }

        // Add complex numbers one by one
        for (int i = 0; i < n; ++i) 
		{
            float tre, tim;

            // Input each complex number
            cout << "Complex number " << i + 1 << ":- " << endl;
            cout << "Enter the real part of the complex number: ";
            cin >> tre;
            cout << "Enter the imaginary part of the complex number: ";
            cin >> tim;

            // Add real and imaginary parts
            re = re + tre;
            im = im + tim;
        }

        // Display the sum of complex numbers
        cout << "The total sum of the complex numbers is ";
        if (im > 0)
            cout << re << " + " << im << "i" << endl;
        else if (im == 0)
            cout << re << endl;
        else
            cout << re << " - " << -im << "i" << endl;
    }
    else 
	{
        cout << "Invalid option." << endl;
    }

    return 0;
}

