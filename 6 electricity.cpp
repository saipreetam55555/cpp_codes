#include<iostream>
using namespace std;
class electricity
{
int unit;
float cost;
public:
float bill()
{
cout<<"\n enter the no. of units"<<endl;
cin>>unit;
if(unit<=100)
{
cost=0.50*unit;
return cost;
}
else
{
if(unit>300)
{
cost=0.60*unit;
return cost;
}
}
}
void surcharge_Bill(float y){
	if(y>250.00)
{
float diff=y-250;
float surcharge=diff*0.15;
float total_cost=y+surcharge;
cout<<" Bill amount with surcharge is Rs"<<total_cost;
}
else
{
cout<<"Bill amout is Rs."<<cost;
}
}
};
int main()
{
float Billed_amount;
electricity me;
Billed_amount=me.bill();
me.surcharge_Bill(Billed_amount);
return 0;
}


