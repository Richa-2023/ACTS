#include<iostream>

int main()
{
int a,b;
std::cout<<"enter the value of a and b:";
std::cin>>a>>b;
std::cout<<"Before swap the value:";
a=a+b;
b=a-b;
a=a-b;
std::cout<<"After swap the value:";
std::cout<<a<<" " <<b;
return 0;
}

