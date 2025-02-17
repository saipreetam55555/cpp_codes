#include <iostream>
using namespace std;

class Student 
{
    string n;  
    int s;   
    double t; 
	double a; 

public:
    void set();

    double average_marks()
    {
    	a = t / s;
    }

    void display();
};

inline void Student :: set() // with inline function
{
    cout << "Enter the name of the student: ";
    cin >> n;
    cout << "Enter the number of subjects: ";
    cin >> s;
    cout << "Enter the total marks secured in all subjects: ";
    cin >> t;
}
    
void Student :: display() // without inline function
{
    cout << "The Average marks secured by " << n <<  " is " << a << " marks. " << endl;
}
    
int main()
{
    Student s;
    s.set();
    s.average_marks();
    s.display();
    return 0;
}

