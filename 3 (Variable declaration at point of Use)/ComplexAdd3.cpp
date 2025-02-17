#include <iostream>
using namespace std;

class Complex 
{
    float re; 
    float im; 

public:

    void set() 
    {
        cout << "Enter the real part of the complex number: ";
        cin >> re;
        cout << "Enter the imaginary part of the complex number: ";
        cin >> im;
    }

    void sum() 
    {
        cout << "How many complex numbers do you want to add? ";
        int n; // Variable declaration moved to the point of use
        cin >> n;

        if (n <= 0) 
        {
            cout << "Invalid number of complex numbers." << endl;
            return;
        }

        for (int i = 0; i < n; ++i)  
        {
            cout << "Complex number " << i + 1 << ":- " << endl;
            float tre, tim; // Variable declaration moved to the point of use
            
            cout << "Enter the real part of the complex number: ";
            cin >> tre;
            cout << "Enter the imaginary part of the complex number: ";
            cin >> tim;

            re = re + tre;
            im = im + tim;
        }
    }

    void display() 
    {
        if (im > 0)
            cout << re << " + " << im << "i" << endl;
        else if (im == 0)
            cout << re << endl;
        else
            cout << re << " - " << -im << "i" << endl;
    }

};

int main() 
{
    Complex c; 
    cout << "If do you want only one complex number (press '0') or do you want to add the complex numbers (press '1') ? ";
    int n; // Variable declaration moved to the point of use
    cin >> n;
    
    if (n == 0)
    {
        c.set();
        c.display();
        return 0;
    }
    else if (n == 1)
    {
        c.sum(); 
        cout << "The total sum of the complex numbers is ";
        c.display();
        return 0;
    }
    else if (n < 0)
    {
        cout << "Invalid" << endl;
        return 0;
    }
}

