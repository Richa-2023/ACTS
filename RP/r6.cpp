#include<iostream>

int main()
{
int num,rem,sum=0;

std::cout<<"Enter the number:";
std::cin>>num;
int m=num;
while(num!=0)
	{
	rem=num%10;
	sum=sum+rem*rem*rem;
	num=num/10;
	}
	if(sum==m)
	{
	std::cout<<"Number is Armstrong";
	}
	else
	{
	std::cout<<"Number is not Armstrong";
	}


return 0;
}

