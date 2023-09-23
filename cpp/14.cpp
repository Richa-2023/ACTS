#include<iostream>
using namespace std;


int main()
{
	int l,b;
	char ch;

	cin >>l>>b;
	cout<< "enter which character you want to print:";
	cin >> ch;

	for(int i=0;i<b;i++)
	{
		for(int j=0;j<l;j++)
		{
			if(i==0 || i==b-1 || j==0 || j== l-1)

				cout<< ch << " " ;
			else 
			cout<< "  ";
		}
		cout<< "\n";
	}
}