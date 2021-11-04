#include <iostream>         //Dynamic binding is also known as late binding
using namespace std;

class Vehicle
{
 	   public:
  	   void final_print()
   	{
   display();
   	 }
   	 virtual void display()
  	  {
   	 cout<<"Vehicle!"<<endl;
   	 }
    
};class Car : public Vehicle
{ 
    	public:
    	virtual void display()
  	  {
        	cout<<"Car! " <<endl;
   	}
};

int main()
{
    	Vehicle obj1;
   	 obj1.final_print();
   	 Car obj2;
   	 obj2.final_print();
    	return 0;
}