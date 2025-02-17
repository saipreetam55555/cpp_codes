#include <iostream>
using namespace std;

int main() 
{
    // Declare variables for name, weight, height, and BMI
    string name;
    float weight;
    float height;
    double bmi;

    // Reference variables for weight and height
    float &w = weight; 
    float &h = height;

    // Input the details of the person
    cout << "Enter the name of the person: ";
    cin >> name;
    cout << "Enter the weight of the person (in kg): ";
    cin >> w;  // Weight is assigned using the reference variable
    cout << "Enter the height of the person (in meters): ";
    cin >> h;  // Height is assigned using the reference variable

    // Calculate BMI using the reference variables
    bmi = w / (h * h);

    // Display the information
    cout << "The name of the person is " << name << ", with a height of " << h 
         << " meters and a weight of " << w << " kg. The BMI of the person is " << bmi << endl;

    return 0;
}

