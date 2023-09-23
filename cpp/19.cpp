#include <iostream>
using namespace std;

int main()
{
	int n,num1=0,num2=1,sum=0,t;

	cout<<"How many Numbers want to print:" ;
	cin>> n;
	cout<<endl;
	cout<< num1 << " " << num2 ;
	for(int i=1;i<n;i++)
	{

		sum=num1+num2;
		cout<<" "<< sum;
		t=num2;
		num2=sum;
		num1=t;

	}
}