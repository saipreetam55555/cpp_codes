#include <iostream>
using namespace std;

class Human 
{
     
	double b; 
	
private: string name; double wt; double ht;
public:
	
    void set(string x, int y, int z);
    
    double bmi()
    {
    	b = wt / (ht * ht);
    	return b;
    }

    void display();
    
};

void Human :: set(string x, int y, int z)
{
    name = x;
    wt = y;
    ht = z;
}

void Human :: display()
{
    cout << "The name of the person is " << name << ", with a height of " << ht << " meters and a weight of " << wt << " kg. The BMI of the person is " << b << endl;
}


int main()
{
    Human hum;  
	string n;  
    float w;   
    float h;
    
	cout << "Enter the name of the person: ";
    cin >> n;
    cout << "Enter the weight of the person (in kg): ";
    cin >> w;
    cout << "Enter the height of the person (in meters): ";
    cin >> h;
    
    hum.set(n, w, h);
    
    hum.bmi();
    
    hum.display();
    
	return 0;
}

