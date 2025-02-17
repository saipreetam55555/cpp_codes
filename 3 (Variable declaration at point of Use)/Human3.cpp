#include <iostream>
using namespace std;

class Human 
{
public:
    void set()
    {
        string n;  // Declaring 'n' inside the set() function
        float w;   // Declaring 'w' inside the set() function
        float h;   // Declaring 'h' inside the set() function

        cout << "Enter the name of the person: ";
        cin >> n;
        cout << "Enter the weight of the person (in kg): ";
        cin >> w;
        cout << "Enter the height of the person (in meters): ";
        cin >> h;

        // BMI calculation will be done in the bmi() function
        bmi(w, h);
    }

    void bmi(float w, float h)
    {
        double b = w / (h * h);  // Declaring 'b' inside the bmi() function
        display(b);  // Passing BMI to the display function
    }

    void display(double b)
    {
        cout << "The BMI of the person is " << b << endl;  // Displaying BMI directly
    }
};

int main()
{
    Human h;   
    h.set();  // Calling set() which now internally calculates and displays BMI
    return 0;
}

