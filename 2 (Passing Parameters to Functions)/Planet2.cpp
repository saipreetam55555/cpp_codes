#include <iostream>
using namespace std;

class Planet 
{
     
    double sa;
    
private: string name; double rp;
public:
	
    void set(string x, int y);

    double SurfaceArea()
    {
    	sa = 4 * 3.14159 * rp * rp;
    	return sa;
    }

    void display();
    
};

void Planet :: set(string x, int y)
{
    name = x;	
    rp =y;
}

 void Planet :: display()
{
    cout << "The given planet is " << name << " with a radius of " << rp << " km. The surface area of the planet is " << sa << " km^2." << endl;
}
    
int main()
{
    Planet sp;
    string p; 
    double r;
    
    cout << "Enter the name of the planet (PLANET NAMES SHOULD BE IN CAPITALS ONLY) : ";
    cin >> p;
    cout << "Enter the radius of the planet (in km): ";
    cin >> r;
    
    sp.set(p, r);
    
    sp.SurfaceArea();
    
    sp.display();
    
    return 0;
}

