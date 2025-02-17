#include <iostream>
using namespace std;
class First { // class definition is a logical construct only it does not occupy memory)
private: int a ; // Member variables
public:
void get(int x);//Member function declared
void print() { //Member funtions
cout<<"The number entered is : "<< a ; //default inline in nature
}
}; // class construt closed with;
void First::get(int x) {//member function defined
	a=x;
}
int main() {
First obj1; // object creation
obj1.get(3); // Accessing the member functions using . operator.
obj1.print();
return 0;
}