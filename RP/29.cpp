#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
        string a;
        int i=0,count=0;
	
	char ch;
	cout<<"Enter String:";
	getline(cin,a);
	
	
	cout<<"Enter Character:";
	cin>>ch;
	
	while(a[i]!='\0')
	{
		if(a[i]==ch)
		{
			count+=1;;
		}
		i++;
	}
	cout<<"Count:"<<count;
}
