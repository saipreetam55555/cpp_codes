#include <iostream>
using namespace std;
class Complex
{
private:
float re; // real part
float im; // imaginary part
public:
 // Default constructor
 Complex()
 {
 re = 0;
 im = 0;
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

 for (int i = 0; i < n; ++i)
 {
 float tre, tim;
 cout << "Complex number " << i + 1 << ":- " << endl;
 cout << "Enter the real part: ";
 cin >> tre;
 cout << "Enter the imaginary part: ";
 cin >> tim;

 // Displaying the entered complex number
 if (tim >= 0)
 cout << tre << " + " << tim << "i" << endl;
 else
 cout << tre << " - " << -tim << "i" << endl;

 re += tre;
 im += tim;
 }
 }

// Function to display the sum of complex numbers
void display()
{
if (im >= 0)
cout << re << " + " << im << "i" << endl;
else
cout << re << " - " << -im << "i" << endl;
}
// Destructor
~Complex()
{
cout << "Destructor is called for Complex object" << endl;
}
 };


 int main()
 {
 Complex co;
 co.sum(); // calling the sum method to add complex numbers
 cout << "The total sum of the complex numbers is: ";
 co.display(); // displaying the result
 return 0;
 }
