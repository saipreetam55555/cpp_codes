#include <iostream>
using namespace std;

class Area 
{
    string pn;  // Name of the place
    double l;   // Length of the place
    double w;   // Width of the place
    double a;   // Area of the place

public:
    void set();

    void area()  
    {
    	a = l * w;
	}

    void display();  
};

void Area :: set()
{
    cout << "Enter the name of the place: ";
    cin >> pn;
    cout << "Enter the length of the place (in metres): ";
    cin >> l;
    cout << "Enter the width of the place (in metres): ";
    cin >> w;
}

 void Area :: display()
{
    cout << "The area of " << pn << " is " << a << " metres." << endl;
}
    
    
int main() 
{
    Area ap;
    ap.set();
    ap.area(); 
    ap.display(); 
	cout << sizeof(Area) << endl; 
    return 0;
}

