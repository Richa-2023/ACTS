#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int rev=0;

	while(n>0)
	{
		int digit=n%10;
		rev=rev*10+digit;
		n=n/10;

	}


	while(rev>0)
	{

		int rev_digit=rev%10;


		switch(rev_digit)
		{
			case 1:cout<<"One ";
				break;
			case 2:cout<<"Two ";
				break;
			case 3:cout<<"Three ";
				break;
			case 4:cout<<"Four ";
				break;
			case 5:cout<<"Five ";
				break;
			case 6:cout<<"Six ";
				break;
			case 7:cout<<"Seven ";
				break;
			case 8:cout<<"Eight ";
				break;
			case 9:cout<<"Nine ";
				break;
			case 0:cout<<"Zero ";
				break;		
		}

		rev=rev/10;

	}
}