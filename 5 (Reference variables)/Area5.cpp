#include <iostream>
using namespace std;

int main() 
{
    string pn;  // Name of the place
    double l;   // Length of the place
    double w;   // Width of the place
    double a;   // Area of the place

    // Using reference variables for input and calculation
    string& place_name = pn;   // Reference variable to 'pn'
    double& length = l;        // Reference variable to 'l'
    double& width = w;         // Reference variable to 'w'
    double& area = a;          // Reference variable to 'a'

    // Get input for the place name, length, and width
    cout << "Enter the name of the place: ";
    cin >> place_name;

    cout << "Enter the length of the place (in metres): ";
    cin >> length;

    cout << "Enter the width of the place (in metres): ";
    cin >> width;

    // Calculate the area using the reference to 'length' and 'width'
    area = length * width;

    // Display the result
    cout << "The area of " << place_name << " is " << area << " metres." << endl;

    return 0;
}

