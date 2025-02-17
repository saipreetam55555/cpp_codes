//Complex Number Addition

/* C++ Program to add two Complex Numbers */

    #include<iostream>

    using namespace std;

    class Complex{

    private:

        int real;

        int imag;

         /* Function to set the values of

          * real and imaginary part of each complex number

          */

                public:

         void setvalue()

        {

            cin>>real;

            cin>>imag;

        }

                /* Function to display the sum of two complex numbers */

        void display()

        {

            cout<<real<<"+"<<imag<<"i"<<endl;

        }

                /* Function to add two complex numbers */

 

        Complex sum(Complex c1) //.return type is object ,1. objects as parameters

        {

                Complex c2;

            c2.real=this->real+c1.real; // Reference variable usage

            c2.imag=this->imag+c1.imag;// by default this pointer points to the current object

                return c2;

        }

        };

   

 

int main()

 

        {

            Complex c1,c2;

            cout<<"Enter real and imaginary part of first complex number"<<endl;

            c1.setvalue();

 

            cout<<"Enter real and imaginary part of second complex number"<<endl;

 

            c2.setvalue();

 

            cout<<"Sum of two complex numbers is"<<endl;

 

            c2=c2.sum(c1);

 

            c2.display();

 

        return 0;

 

        }
