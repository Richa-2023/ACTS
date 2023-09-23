#include<bits/stdc++.h>
using namespace std;



int main(){

	int rows,cols;
	cin>> rows;
	cin>> cols;

	string str1,str2;

	getline(cin,str1);
	getline(cin,str2);

	for(int i=0;i<str1.length()+2;i++)
	{
		cout<< "*";
	}
	for(int i=0;i<cols;i++)
	{
		cout<< " " << str1 << " "<< str2;
	}


}