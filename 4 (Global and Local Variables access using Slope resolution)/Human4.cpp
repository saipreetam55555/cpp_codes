#include <iostream>
using namespace std;

// Global variables
string n;  // Global variable for name
float w;   // Global variable for weight
float h;   // Global variable for height
double b;  // Global variable for BMI

class Human {
public:
    void set() {
        // Local variables are assigned values using user input
        cout << "Enter the name of the person: ";
        cin >> ::n;  // Using global variable 'n' with scope resolution
        cout << "Enter the weight of the person (in kg): ";
        cin >> ::w;  // Using global variable 'w' with scope resolution
        cout << "Enter the height of the person (in meters): ";
        cin >> ::h;  // Using global variable 'h' with scope resolution
    }

    void bmi() {
        // The calculation of BMI is done using the global variables
        ::b = ::w / (::h * ::h);  // Using global variables for BMI calculation
    }

    void display() {
        // Accessing global variables to display values
        cout << "The name of the person is " << ::n << ", with a height of " << ::h
             << " meters and a weight of " << ::w << " kg. The BMI of the person is " << ::b << endl;
    }
};

int main() {
    Human h;  // Create an object of the class
    h.set();  // Call set method to input values
    h.bmi();  // Call bmi method to calculate BMI
    h.display();  // Call display method to show results
    return 0;
}

