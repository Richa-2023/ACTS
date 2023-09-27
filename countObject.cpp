#include<iostream>
using namespace std;

class Count{
	static int count;
	
	public:
	Count(){
	count++;
	}
	static void getCount()
	{
		
		cout<<"Object "<<count<<" is created..."<<endl;
	}


};
int Count::count=0;    //Initialization of static data member

int main()
{
	Count obj1;
	Count::getCount();      //static member function
	//obj1.getCount();
	
	Count obj2;
	Count::getCount();
	//obj2.getCount();
	
	Count obj3;
	Count::getCount();
}
