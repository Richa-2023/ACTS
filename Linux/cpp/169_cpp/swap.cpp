#include<iostream>
int swap(int &a,int &b);
int main()
{
	int a,b;
	std::cout<<"Enter Value: ";
	std::cin>>a>>b;
	
	std::cout<<"Before Swap: "<<a<<" "<<b;
	swap(a,b);
	std::cout<<"\nAfter Swap: "<<a<<" "<<b;
	return 0;
}

int swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;

        std::cout<<"\n\nInside function: "<<a<<" "<<b;
        return 0;		
}

