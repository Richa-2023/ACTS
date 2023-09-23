#include<iostream>
int swap(int &a,int &b);
float swap(float &x,float &y);
int main()
{
        int a,b;
        float x,y;
	std::cout<<"Enter Value: ";
	std::cin>>a>>b;
	std::cout<<"Enter Value: ";
	std::cin>>x>>y;
	
	std::cout<<"Before Swap: "<<a<<" "<<b;
	swap(a,b);
	std::cout<<"\nAfter Swap: "<<a<<" "<<b;
	
	std::cout<<"Before Swap: "<<x<<" "<<y;
	swap(x,y);
	std::cout<<"\nAfter Swap: "<<x<<" "<<y;
	
	return 0;
}

int swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;

        //std::cout<<"\n\nInside function: "<<a<<" "<<b;
        return 0;		
}
float swap(float &x,float &y)
{
	float temp;
	temp=x;
	x=y;
	y=temp;

        //std::cout<<"\n\nInside function: "<<x<<" "<<y;
        return 0;		
}

