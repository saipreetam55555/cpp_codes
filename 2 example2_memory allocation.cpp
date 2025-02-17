// C++ program to store GPA of n number of students and display it
// where n is the number of students entered by the user

#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter total number of students: ";
    cin >> num;
    float* ptr;
    
    // memory allocation of num number of floats
    ptr = new float[num];
    
    cout << "Enter GPA of students." << endl;
    for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << ": ";
    cin >> *(ptr + i);
    }
    
    cout << "\nDisplaying GPA of students." << endl;
    for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
    }
    
    // ptr memory is released
    delete[] ptr;
    ptr = nullptr;
    
    return 0;
}
