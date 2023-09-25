#include<iostream>
using namespace std;

int main()
{
	int n,sum=0,avg;
	cout<<"Enter Number Of Subjects: ";
	cin>>n;
	int *s,i;
	s = (int*) malloc(n * sizeof(int));

	if(s==NULL)
	{
		cout<<"Failed To Allocate Memory..";
	}
	else
	{
		for(i=0;i<n;i++)
		{
		        cin>>s[i];
			sum = sum + s[i];
			
		}
		avg = sum /n;
		cout<<"Average: "<<avg;
	}
	free(s);
}
