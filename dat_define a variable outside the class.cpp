#include<iostream>
using namespace std;
class Max{
	public:
	int max(int x, int y){
	int max_val=(x > y) ? x : y;
	return max_val;
}
    
};
	
int main(){
	int a1;
	Max m1;
	a1=m1.max(4,5);
	cout<< a1<< endl;
	int a2=m1.max(7,8); //declare when required
	cout<< a2 << endl;
}