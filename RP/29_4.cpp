#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
        string a;
        int i,count=0;
	
	char ch;
	cout<<"Enter String:";
	getline(cin,a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]=='a') || (a[i] =='e') || (a[i]=='o') || (a[i] =='i') || (a[i] =='u') || 
		(a[i]=='A') || (a[i] =='E') || (a[i]=='O') || (a[i] =='I') || (a[i] =='U'))
		{
			count+=1;
		}

	}
	cout<<"Count:"<<count;
}
