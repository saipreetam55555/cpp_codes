#include <iostream>
using namespace std;

// Global variables
string n;  // Name of the student
int s;     // Number of subjects
double t;  // Total marks secured in all subjects
double a;  // Average marks (this will be calculated)

class Student 
{
public:
    // Method to set values (local variables)
    void set()
    {
        cout << "Enter the name of the person: ";
        cin >> ::n;  // Access global variable n using scope resolution
        cout << "Enter the number of subjects: ";
        cin >> ::s;  // Access global variable s using scope resolution
        cout << "Enter the total marks secured in all subjects: ";
        cin >> ::t;  // Access global variable t using scope resolution
    }

    // Method to calculate average marks
    double average_marks()
    {
        ::a = ::t / ::s;  // Access global variables t and s using scope resolution
        return ::a;       // Return the global average a
    }

    // Method to display the average marks
    void display()
    {
        cout << "The Average marks secured by " << ::n <<  " is " << ::a << " marks. " << endl;  // Access global variables
    }
};

int main()
{
    Student s;
    s.set();            // Set values using the set method
    s.average_marks();  // Calculate average using the average_marks method
    s.display();        // Display the results using the display method
    return 0;
}

