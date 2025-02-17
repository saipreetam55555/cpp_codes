#include <iostream>
using namespace std;

class Area 
{
    string pn;  // Name of the place

public:
    void set()
    {
        // Variable declaration at point of use
        cout << "Enter the name of the place: ";
        cin >> pn;
        double l, w;  // Length and width of the place
        cout << "Enter the length of the place (in metres): ";
        cin >> l;
        cout << "Enter the width of the place (in metres): ";
        cin >> w;

        // Call the area method with l and w as parameters
        area(l, w);  
    }

    void area(double l, double w)  
    {
        double a = l * w;  // Calculate area locally
        display(a);  // Pass calculated area to display method
    }

    void display(double a)
    {
        // Display area with the name of the place
        cout << "The area of " << pn << " is " << a << " metres." << endl;
    }
};

int main() 
{
    Area ap;
    ap.set();  // Initialize and calculate area in set method
    return 0;
}

