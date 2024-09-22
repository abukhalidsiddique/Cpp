#include <iostream>
using namespace std;

class Weight{
	int x;

	 public:
		Weight();
		Weight(int a);
		void display();
//Pre increment
		Weight operator ++();
//Post increment
		Weight operator ++(int);
};

Weight::Weight(){
	x=0;
}
Weight::Weight(int a){
	 x=a;
}

void Weight::display(){
	cout<<"The Weight is: "<<x<<" kg"<<endl;
}

Weight Weight::operator ++(){
	Weight temp;
	 temp.x= ++x;
	return temp;
}

Weight Weight::operator ++(int){
	 Weight temp;
	temp.x= x++;
	return temp;
}
int main(){
	Weight w1(55),w2,w3;
	w1.display();

	w2= ++w1;
	w2.display();

	cout<<endl;

	w3=w1++;
	w3.display();

	Weight w4=++w2;

	cout<<endl;
	w4.display();

	return 0;
}

