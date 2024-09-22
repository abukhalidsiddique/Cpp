#include <iostream>
using namespace std;

class Distance
{
	int feet;
        int inches;

	public:
      // required constructors
     	 	Distance(){
         		feet = 0;
         		inches = 0;
      		}

		Distance(int f, int i){
	         	feet = f;
         		inches = i;
      		}
// method to display distance
      void displayDistance()
      {
         cout << "F: " << feet << " I:" << inches <<endl;
      }

// overloaded minus (-) operator
      void operator - ()
      {
         feet = -feet;
         inches = -inches;
      }
};


int main()
{
   Distance D1(11, 10), D2(-5, 11);

   -D1;          // apply negation
// display D1
    D1.displayDistance();

   -D2;           // apply negation
    // display D2
    D2.displayDistance();

   return 0;
}

