//Dynamic memory allocation using objects and constrcutors
#include <iostream>
using namespace std;
class Student {
   int age;
   public:    // constructor initializes age to 12
    void setAge(){
    	cout<<"Enter the age"<<endl;
    	cin>>age;
	}
    void getAge() {
        cout << "Age = " << age << endl;
    }
};
int main() {
	Student s1;
	// dynamically declare Student object
    Student *ptr = new Student(); //Student::Student() have to understand once we learn Constrcutors
    ptr->setAge();
    // call getAge() function
    ptr->getAge();
    // ptr memory is released
    delete ptr;
    return 0;
}
