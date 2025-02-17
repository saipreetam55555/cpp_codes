#include <iostream>
using namespace std;

class Student 
{
    string *n;  // Dynamically allocated string for student name
    int *s;      // Dynamically allocated integer for number of subjects
    double *t;   // Dynamically allocated double for total marks
    double *a;   // Dynamically allocated double for average marks

public:
    Student() // Constructor to allocate memory
    {
        n = new string;
        s = new int;
        t = new double;
        a = new double;
    }

    ~Student() // Destructor to free allocated memory
    {
        delete n;
        delete s;
        delete t;
        delete a;
    }

    void set();
    void average_marks();
    void display();
};

inline void Student :: set() // Inline function for setting values
{
    cout << "Enter the name of the student: ";
    cin >> *n;
    cout << "Enter the number of subjects: ";
    cin >> *s;
    cout << "Enter the total marks secured in all subjects: ";
    cin >> *t;
}
    
void Student :: average_marks() // Calculate average marks
{
    *a = *t / *s;
}
    
void Student :: display() // Display student details
{
    cout << "The Average marks secured by " << *n <<  " is " << *a << " marks. " << endl;
}
    
int main()
{
    Student s; // Creating an object of Student class
    s.set();   // Taking input from user
    s.average_marks(); // Calculating average
    s.display(); // Displaying result
    return 0;
}
