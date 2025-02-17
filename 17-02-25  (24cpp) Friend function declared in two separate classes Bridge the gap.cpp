//2.Friend function declared in two separate classes: Bridge the gap
// Write a c++ program to calculate the total balnce o account holder in sb and rd account
#include<iostream>
using namespace std;
class saving; // Advanced declaration
class rd; // advance declaration compiler
class saving
{
	private:
		int acc_no,balance;
		public: 
		void setdata()
		{
			acc_no= 108;
			balance= 5000;			
		}
		friend int total(saving s, rd r);//Friend function defiend in the saving class		
};
class rd
{
	private:
		int acc_no,balance;
	public:
		void setdata()
		{
			acc_no= 801;
			balance= 8000;
		}
		
		friend int total(saving s, rd r);// same friend function defined in the RD class
};
int total(saving s, rd r)
{
	return(s.balance + r.balance);
}

int main()
{
	saving s;
	rd r;
	s.setdata();
	r.setdata();
	cout<<"Total amount in two accounts is = "<< total(s,r)<<endl;
}
