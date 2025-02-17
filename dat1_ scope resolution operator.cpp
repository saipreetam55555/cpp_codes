#include<iostream>
using namespace std;
int max_val=9;//Glbal variable declared and defined
class Max{
	public:
	int max(int x, int y){
	int max_val=(x > y) ? x : y;
	return max_val;
}
    
};
	
int main(){
	int max_val=4;//Local Variable with the same name declared and defined
	Max m1;
	int a2=m1.max(7,8); //variable declared when required
	cout<< a2 << endl;
	cout<<max_val<<endl;//Printing the local variable
	cout<<::max_val<<endl;//Printing the global variable
}
