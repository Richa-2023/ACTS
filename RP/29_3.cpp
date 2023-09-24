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
		if(a[i]==' ')
		{
			count+=1;;
		}
		
	}
	cout<<"Count:"<<count+1;
}
