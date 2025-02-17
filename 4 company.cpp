#include<iostream>
using namespace std;
int Capital=50;
class companyX{
	
	//int Capital=50;
	int RAmount;
	public:
	void Require(int x){
		RAmount = x;	
	}	
	int Allocate(){
		Capital=Capital-RAmount;
		return Capital;
	}
		
};
int main(){
	companyX A,B,C;
	A.Require(15);
	int BalA=A.Allocate();
	B.Require(10);
	int BalB=B.Allocate();
	C.Require(9);
	int BalC=C.Allocate();
	cout<<BalA<<endl;
	cout<<BalB<<endl;
	cout<<BalC<<endl;
	return 0;
}