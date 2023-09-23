#include<iostream>
float areaCircum(float &r,float &circum);
float areaperi(float &a,float &b, float &peri);
int main()
{
char ch;
std::cout<<"Enter character: c-circle and r-rectangle";
std::cin>>ch;

	if(ch=='c')
	{
		float r;
		float ar,circum;
		std::cout<<"Enter Radius of Circle: ";
		std::cin>>r;
		
		areaCircum(r,circum);
		std::cout<<" circumference of circle:"<<circum;
			
	}
	if(ch=='r')
	{
		float a,b;
		float ar;
		std::cout<<"Enter length and breadth: ";
		std::cin>>a>>b;
		
		areaperi(a,b,peri);
		 std::cout<<" perimeter of rectangle:"<<peri;
		
	}
return 0;
}

float areaCircum(float &r,float &circum)
{
	float area;
	
	area=3.14*r*r;
	circum=2*3.14*r;
	
	std::cout<<" area of circle:"<<area;
        
	return 0;
}

float areaperi(float &a,float &b, float &peri)
{
	float ar,peri;
	
	ar=a*b;
	peri=2*(a+b);
	std::cout<<" area of rectangle:"<<ar;
               
	return 0;
}
