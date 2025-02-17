#include <iostream>
using namespace std;

class Planet
{
    // Removed class member variables to declare them at the point of use
public:
    void set()
    {
        string p;  // Declared 'p' at the point of use
        double r;  // Declared 'r' at the point of use

        cout << "Enter the name of the planet: ";
        cin >> p;
        cout << "Enter the radius of the planet (in km): ";
        cin >> r;

        double sa = 4 * 3.14159 * r * r;  // Calculated 'sa' locally

        display(p, r, sa);  // Passing the variables to the display function
    }   

    void display(const string& p, double r, double sa)
    {
        cout << "The given planet is " << p << " with a radius of " << r << " km. The surface area of the planet is " << sa << " km^2." << endl;
    }
};
 
int main()
{
    Planet sp;
    sp.set();
    return 0;
}

