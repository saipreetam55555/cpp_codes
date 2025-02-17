#include <iostream>
using namespace std;

class Student 
{
    string n;  
    int s;   
    double t; 

public:
    void set()
    {
        cout << "Enter the name of the person: ";
        cin >> n;
        cout << "Enter the number of subjects: ";
        cin >> s;
        cout << "Enter the total marks secured in all subjects: ";
        cin >> t;
    }

    void display()
    {
        // Declare and calculate the average directly inside display method
        double average = t / s;  
        cout << "The Average marks secured by " << n << " is " << average << " marks." << endl;
    }
};

int main()
{
    Student s;
    s.set();       // Set values for name, subjects, and total marks
    s.display();   // Display the average directly
    return 0;
}

