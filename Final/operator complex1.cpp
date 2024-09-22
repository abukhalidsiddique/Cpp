#include<iostream>
using namespace std;

class Complex{
	 float real;
	float imag;

	public:
		Complex();
		Complex(float r,float i);

		// Overloading + operator
		Complex operator +(Complex c);
		friend void display(Complex c);
};

Complex::Complex(){
	real=0;
	imag=0;
}

Complex::Complex(float r,float i){
	 real=r;
	imag=i;
}
Complex Complex::operator +(Complex c){
	Complex temp;
	temp.real=real+c.real;
	temp.imag=imag+c.imag;
	return temp;
}
void display(Complex c){
	cout<<c.real<<" + "<<c.imag<<"i"<<endl;
}

int main(){
	Complex c1(5.4,3.7),c2(2.8,5.6),c3;

	cout<<"1st Complex Number is: ";
	display(c1);

	 cout<<"2nd Complex Number is: ";
	display(c2);

	c3=c1+c2;
	cout<<"Added Complex Number is: ";
	display(c3);

	return 0;
}

