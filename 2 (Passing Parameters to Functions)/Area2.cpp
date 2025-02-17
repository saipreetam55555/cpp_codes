#include <iostream>
using namespace std;

class Area 
{
    double a;   // Area of the place

private: string name; double lp; double wp;
public:
    void set(string x, double y, double z);

    void area()  
    {
    	a = lp * wp;
	}

    void display();  
};

void Area :: set(string x, double y, double z)
{
    name = x;
    lp = y;
    wp = z;
}

 void Area :: display()
{
    cout << "The area of " << name << "with length of " << lp << " metres and width of " << wp << " metres is " << a << " metres." << endl;
}
    
    
int main() 
{
    Area ap;
    string pn;  // Name of the place
    double l;   // Length of the place
    double w;   // Width of the place
    cout << "Enter the name of the place: ";
    cin >> pn;
    cout << "Enter the length of the place (in metres): ";
    cin >> l;
    cout << "Enter the width of the place (in metres): ";
    cin >> w;
    ap.set(pn, l, w);
    ap.area(); 
    ap.display();  
    return 0;
}

