#include<iostream>
#include<iomanip>
using namespace std;
void charLine(int n,char ch);
int main()
{
	int n=40;
	char ch;
	cout<<"Enter Character:";
	cin>>ch;
	const char seperator=' ';
	
	charLine(n,ch);
	cout<<endl;
	cout << left << setw(20) << setfill(seperator) << "Data Type";
        cout << left << setw(20) << setfill(seperator) << "Size in Bytes";
        cout<<endl;
        charLine(n,ch);
        cout<<endl;
        cout << left << setw(20) << setfill(seperator) << "Integer";
        cout << left << setw(20) << setfill(seperator) << "4";
        cout<<endl;
        charLine(n,ch);
        cout<<endl;
        cout << left << setw(20) << setfill(seperator) << "Character";
        cout << left << setw(20) << setfill(seperator) << "1";
        cout<<endl;
        charLine(n,ch);
        cout<<endl;
        cout << left << setw(20) << setfill(seperator) << "Float";
        cout << left << setw(20) << setfill(seperator) << "4";
        cout<<endl;
        charLine(n,ch);
        cout<<endl;
}
void charLine(int n,char ch)
{
	
	for(int i=0;i<n;i++)
	{
		cout<<ch;
	}
}
