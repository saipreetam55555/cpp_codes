//4.Friend class of two different classes: bridge the gap
#include<iostream>
using namespace std;

class saving
{
	private:
		int acc_no,balance;
	public:
		void setdata()
		{
			acc_no= 108;
			balance=5000;
			
		}
	friend class total;	//Class Total is a friend of class sb	
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
	friend class total;	// Class Total is a friend class rd	
};

class total
{
	public:
		int tot(saving s, rd r)
		{
			return(s.balance + r.balance);
		}
};


int main()
{
	total t;
	saving s;
	rd r;
	s.setdata();
	r.setdata();
	cout<<"Total amount in two accounts is = "<< t.tot(s,r)<<endl;
}
