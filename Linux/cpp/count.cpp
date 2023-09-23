#include<iostream>
int main()
{
int num,digit,rem,count=0;
std::cout<< "Enter any number: ";
std::cin>>num;
std::cout<< "Enter any Digit:";
std::cin>>digit;
while(num!=0)
{
rem=num%10;
if(rem==digit)
	count++;
num=num/10;
}
std::cout<<"Digit count: "<<count;

return 0;
}
