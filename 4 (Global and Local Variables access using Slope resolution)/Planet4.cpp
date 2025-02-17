#include <iostream>
using namespace std;

// Global variables
string planetName;  // Global variable for planet name
double radius;      // Global variable for radius
double surfaceArea; // Global variable for surface area

class Planet
{
public:
    void set()
    {
        // Local variables inside set() method
        cout << "Enter the name of the planet: ";
        cin >> planetName; // Accessing global variable 'planetName'
        cout << "Enter the radius of the planet (in km): ";
        cin >> radius; // Accessing global variable 'radius'
    }

    double SurfaceArea()
    {
        // Accessing global variable 'radius' and calculating surface area
        surfaceArea = 4 * 3.14159 * radius * radius;
        return surfaceArea; // Returning calculated surface area
    }

    void display()
    {
        // Accessing global variables 'planetName', 'radius', and 'surfaceArea' to display results
        cout << "The given planet is " << planetName << " with a radius of " << radius << " km. The surface area of the planet is " << surfaceArea << " km^2." << endl;
    }
};

int main()
{
    Planet sp;   // Creating an object of class Planet
    sp.set();    // Calling the 'set' method to get planet data
    sp.SurfaceArea();  // Calling the 'SurfaceArea' method to compute the surface area
    sp.display();  // Calling the 'display' method to show the results
    return 0;
}

