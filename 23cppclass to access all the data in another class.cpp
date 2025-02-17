#include <iostream>
using namespace std; 
class rd; //advanced decleration 
//Its an empty class (class rd;) no body follwed by ';'
class sb { 
private: 
    int a=100; 
  
public: 
    void set(int j) { //calling parameter j
			a = j; 
		} 
    void showrd(sb x); //function declerad  ,Showrd  is a function
    //passing parameter are 'sb x' where sb is an object as(datatype) with the vaiable x
    friend class rd; // Friend Class 
}; 
  
class rd { 
private: 
    int b; 
  
public: 
	void set(int k){
		k=b;
	}
    void showrd(sb x) 
    { 
        // Since B is friend of A, it can access 
        // private members of A 
        cout << "The sum of accounts is=" << x.a; 
    } 
}; 
  
int main() 
{ 
    sb a;
	a.set(400); 
    rd b; 
    //b.set(600);
    b.showrd(a); 
    return 0; 
} 
