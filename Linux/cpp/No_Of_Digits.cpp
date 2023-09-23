#include<iostream>
using namespace std;
int main()
{
	int n,i,digit,count=0;
	cout<<"Enter ther number:";
	cin>>n;
	cout<<"Enter the digit you want to find: ";
	cin>>i;


	while(n>0)
	{
	     digit=n%10;
	     if(digit==i)
	     {
	     	count++;
	     }
	     n=n/10;
	}

	cout<<"count of "<<i <<" :"<<count<<endl;
}