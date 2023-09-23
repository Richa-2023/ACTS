#include<iostream>
using namespace std;

int main()
{
	int num1,num2,choice,choice2,n=1;


	cout<< "Enter First Number:";
	cin>>num1;
	cout<<"Enter Second Number:";
	cin>>num2;


	while(n)
	{
		cout<<"\n Which Operation do u want to perform:"<<endl;

		cout<< "1.Addition:" << endl;
		cout<< "2.Substration:" << endl;
		cout<< "3.Multiplication:"<<endl;
		cout<< "4.Division: "<< endl;

		cout<< "Choice:";
		cin>> choice;


		switch(choice)
		{
		case 1:cout << "Result: "<<num1+num2;
			break;
		case 2:cout << "Result: "<<num1-num2;
			break;
		case 3:cout << "Result: "<<num1*num2;
			break;
		case 4:cout << "Result: "<< num1/num2;
			break;
		}

		cout<< " \n Do you want to Continue: " << endl;
		cout<< "1.Yes"<<endl;
		cout<< "2.No " << endl;

		cout<<"Choice:" ;
		cin >> choice2;

		if(choice2==2)
		{
			n=0;
		}
		else
		{
			continue;
		}




	}

	


}