#include <iostream>
using namespace std;

class Student 
{
    string n;  // Student name
    int s;     // Number of subjects
    double t;  // Total marks secured
    double a;  // Average marks 

public:
    void set();
    friend void average_marks(Student&); // Pass by reference
    void display();
};

// Function to set student details
void Student::set() 
{
    cout << "Enter the name of the student: ";
    cin >> n;
    cout << "Enter the number of subjects: ";
    cin >> s;
    cout << "Enter the total marks secured in all subjects: ";
    cin >> t;
    a = 0; // Initialize to avoid garbage value
}

// Friend function to calculate average marks
void average_marks(Student &st) // Pass by reference
{
    if (st.s == 0) 
    {
        cout << "Error: Number of subjects cannot be zero!" << endl;
        st.a = 0; // Set average to 0 to avoid division by zero
    } 
    else 
    {
        st.a = st.t / st.s; // to calculate and store in original object
    }
}

// Function to display student details
void Student::display() 
{
    cout << "The Average marks secured by " << n << " is " << a << " marks." << endl;
}

int main() 
{
    Student s;
    s.set();
    average_marks(s); 
    s.display();
    return 0;
}

