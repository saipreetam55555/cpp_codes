#include <iostream>
using namespace std;

int main()
{
    // Declare variables for name, subjects, total marks, and average
    string name;
    int subjects;
    double totalMarks;
    double average;

    // Reference variables for input and processing
    string &n = name;       // Reference to name
    int &s = subjects;      // Reference to number of subjects
    double &t = totalMarks; // Reference to total marks
    double &a = average;    // Reference to average marks

    // Getting input using reference variables
    cout << "Enter the name of the person: ";
    cin >> n;
    cout << "Enter the number of subjects: ";
    cin >> s;
    cout << "Enter the total marks secured in all subjects: ";
    cin >> t;

    // Calculating average using reference variable
    a = t / s;

    // Displaying output using reference variable
    cout << "The Average marks secured by " << n << " is " << a << " marks." << endl;

    return 0;
}

