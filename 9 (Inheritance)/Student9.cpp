#include <iostream>
using namespace std;

// Base class
class Student  
{
protected:
    string n;  // Name of the student
    int s;     // Number of subjects
    double t;  // Total marks secured
    double a;  // Average marks

public:
    void set();
    double average_marks();
    void display();
};

// Derived class inheriting from Student
class Result : public Student 
{
	
public:
    void calculate_average()// Function to calculate average marks
	{
	    a = t / s;
	} 
    
};

// Inline function to set student details
inline void Student :: set() 
{
    cout << "Enter the name of the student: ";
    cin >> n;
    cout << "Enter the number of subjects: ";
    cin >> s;
    cout << "Enter the total marks secured in all subjects: ";
    cin >> t;
}

// Function to display student details
void Student :: display() 
{
    cout << "The Average marks secured by " << n <<  " is " << a << " marks. " << endl;
}
    
int main()
{
    Result r; // Object of derived class
    r.set();  // Calling base class function
    r.calculate_average(); // Calling derived class function
    r.display(); // Calling base class function
    return 0;
}

