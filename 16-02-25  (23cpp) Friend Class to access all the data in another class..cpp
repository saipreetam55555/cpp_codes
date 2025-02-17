#include <iostream>
using namespace std; 
class rd;
class sb { 
private: 
    int a; 
  
public: 
    void set(int j) { j = a; } 
    void showrd(sb x);
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
