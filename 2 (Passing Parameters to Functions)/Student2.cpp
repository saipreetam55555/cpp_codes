#include <iostream>
using namespace std;

class Student 
{

	double a; 
	
private: string s; int sub; double tot;
public:
    void set(string name, int ns, double ms);

    double average_marks()
    {
    	a = tot / sub;
    }

    void display();
};

void Student :: set(string name, int ns, double ms)
{
	s = name;
	sub = ns;
	tot = ms;
}
    
void Student :: display()
{
    cout << "The Average marks secured by " << s <<  " with " << sub << " subjects of " << tot << " marks is " << a << " marks. " << endl;
}
    
int main()
{
    Student st;
    string n;  
    int nos;   
    double t; 
    cout << "Enter the name of the student: ";
    cin >> n;
    cout << "Enter the number of subjects: ";
    cin >> nos;
    cout << "Enter the total marks secured in all subjects: ";
    cin >> t;
    st.set(n, nos, t);
    st.average_marks();
    st.display();
    return 0;
}

