#include <iostream>
using namespace std;

class Complex 
{
    float re=0; 
    float im=0; 
public:

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

        for (int i = 0; i < n; i=i+1)  
		{
            float tre; 
            float tim; 
            
			cout << "Complex number " << i + 1 << ":- " << endl;
			
            cout << "Enter the real part of the complex number: ";
            cin >> tre;
            cout << "Enter the imaginary part of the complex number: ";
            cin >> tim;

            re = re + tre;
            im = im + tim;
        }
    }

    void display();

};


inline void Complex :: display() // with inline function
{
    if (im >= 0)
        cout << re << " + " << im << "i" << endl;
    else
        cout << re << " - " << -im << "i" << endl;
}
 
int main() 
{
	int num;
    Complex co;
	co.sum(); 
    cout << "The total sum of the complex numbers is ";
    co.display();
    return 0;
}
