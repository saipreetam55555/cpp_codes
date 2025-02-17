#include <iostream>
using namespace std;

int main()
{
    string p; // Name of the planet
    double r; // Radius of the planet
    double sa; // Surface area of the planet
    
    // Reference variable for the planet name
    string& ref_p = p;
    
    // Reference variable for the radius
    double& ref_r = r;
    
    // Reference variable for the surface area
    double& ref_sa = sa;
    
    // Taking input for the planet name and radius
    cout << "Enter the name of the planet: ";
    cin >> ref_p;
    
    cout << "Enter the radius of the planet (in km): ";
    cin >> ref_r;
    
    // Calculating the surface area of the planet
    ref_sa = 4 * 3.14159 * ref_r * ref_r;
    
    // Displaying the results
    cout << "The given planet is " << ref_p << " with a radius of " << ref_r << " km. The surface area of the planet is " << ref_sa << " km^2." << endl;
    
    return 0;
}

