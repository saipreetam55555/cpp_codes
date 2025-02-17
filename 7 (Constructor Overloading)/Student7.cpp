#include <iostream>
using namespace std;

class Student 
{
    string n;  // Name of the student
    int s;     // Number of subjects
    double t;  // Total marks
    double a;  // Average marks

public:
    // Default constructor
    Student()
    {
        n = "Unknown";
        s = 0;
        t = 0.0;
        a = 0.0;
    }

    // Parameterized constructor
    Student(string name, int subjects, double total_marks)
    {
        n = name;
        s = subjects;
        t = total_marks;
        a = t / s;  // Calculating average marks
    }



    // Function to display student details
    void display()
    {
        cout << "The Average marks secured by " << n << " is " << a << " marks." << endl;
    }
};

int main()
{
    // Using parameterized constructor
    Student s1("John", 5, 450.0);
    s1.display();
    cout << endl;

    // Using default constructor and setting values manually
    Student s2;
    cout << "Enter the name of the student: ";
    string name;
    cin >> name;
    cout << "Enter the number of subjects: ";
    int subjects;
    cin >> subjects;
    cout << "Enter the total marks secured in all subjects: ";
    double total_marks;
    cin >> total_marks;
    // Assigning values through constructor
    Student s3(name, subjects, total_marks);
    s3.display();
    
    return 0;
}

