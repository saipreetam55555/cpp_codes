//1.Friend function defined outside the class to access the private data
#include <iostream> 
using namespace std; 
class A{

   int a;
   friend void printa( A a1 );   // declared in private section  can also be declared in the public section
   public:
      void seta( int b )// function to intialize the private data
	{
  	 a = b;
	}  
      
	};
	void printa( A a1 ) //defined without any scope resolution operator => it does not belong to the class
	{
   
   	cout << "Value in A : " << a1.a <<endl; // private data accessed using the object parameters of friend function
	}
 
	int main() {
   			A a1;
   			a1.seta(10);
   			printa( a1 );// .dot operator not required,called like a normal function
   			return 0;
		}
