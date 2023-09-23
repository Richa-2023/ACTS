#include <iostream>
using namespace std;


int main()
{
	int n=21,u_pick,c_pick;

	while(n>1)
	{
		cout<<"please pick matchstick between(1,2,3,4): ";
		cin >>u_pick;

		cout<< endl;

		c_pick=5-u_pick;

		cout<<"You picked "<< u_pick << " matchstick, So Computer Picked "<< c_pick<< endl << endl;
		n=n-u_pick-c_pick;
		cout<<"Remaining matchstick: "<< n <<endl; 
		

	}

	cout<< "you will have to picked last matchstick so you lose!!";
}
