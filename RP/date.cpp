#include<iostream>
using namespace std;
void getDate(int *d,int *m,int *y);
int main()
{
	int date,year;
	//char month[100];
	int month;
	getDate(&date,&month,&year);
	cout<<"Date: "<<date<<"/"<<month<<"/"<<year;
	return 0;
}
void getDate(int *d,int *m,int *y)
{
	cout<<"Enter Date: ";
	cin>>*d;
	cout<<"Enter Month:";
	cin>>*m;
	cout<<"Enter Year:";
	cin>>*y;
}
