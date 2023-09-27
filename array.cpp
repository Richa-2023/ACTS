#include<iostream>
using namespace std;

class Array{
	int size;
	int *arr;
	
	public:
	Array();
	Array(int s);
	Array(Array &a);
	void Accept();
	void Display(void);

};
Array::Array()
{
	size=5;
	arr=new int[size];
	for(int i=0;i<size;i++)
	{
		arr[i]=0;
	}
}
Array::Array(int s)
{
	size=s;
	
	arr = new int[size];
	for(int i=0;i<size;i++)
	{
		arr[i]=0;
	}
}

Array::Array(Array &a)
{
	size=a.size;
	arr=new int[size];
	for(int i=0;i<size;i++)
	{
		arr[i]=a.arr[i];
	}
}

void Array::Accept()
{
	cout<<"Enter Array Elements:";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
}
void Array::Display()
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	Array a3(5);
	a3.Accept();
	a3.Display();
	
	cout<<endl;
	Array a4(a3);
	a4.Display();
	
}
