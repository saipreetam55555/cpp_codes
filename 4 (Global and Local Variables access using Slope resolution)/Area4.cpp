#include <iostream>
using namespace std;

string pn; // Global variable for the name of the place
double l, w, a; // Global variables for length, width, and area

class Area 
{
public:
    // Method to set values for the place name, length, and width
    void set() 
    {
        cout << "Enter the name of the place: ";
        cin >> ::pn; // Access global variable 'pn' using :: scope resolution
        cout << "Enter the length of the place (in metres): ";
        cin >> ::l;  // Access global variable 'l' using :: scope resolution
        cout << "Enter the width of the place (in metres): ";
        cin >> ::w;  // Access global variable 'w' using :: scope resolution
    }

    // Method to calculate area using global variables
    void area() 
    {
        ::a = ::l * ::w; // Access global variable 'a', 'l', and 'w' using ::
    }

    // Method to display the area
    void display() 
    {
        cout << "The area of " << ::pn << " is " << ::a << " square metres." << endl;
    }
};

int main() 
{
    Area ap; // Create an object of the Area class
    ap.set(); // Call the set method to input values
    ap.area(); // Call the area method to calculate the area
    ap.display(); // Call the display method to show the result
    return 0;
}

