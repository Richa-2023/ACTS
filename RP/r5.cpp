#include<iostream>

int main()
{
int BS,SA,COM,NA;

std::cout<<" Enter the Basic Salary :";
std::cin>>BS;
std::cout<<"Total Sales Amount :";
std::cin>>SA;

if(SA>5000 && SA<7500)
{
COM=(3*SA)/100;
std::cout<<"Commission is:"<<COM;
NA=BS+COM;
std::cout<<"Net Salary is:"<<NA;
}
else if(SA>7501 && SA<10500)
{
COM=(8*SA)/100;
std::cout<<"Commission is:"<<COM;
NA=BS+COM;
std::cout<<"Net Salary is:"<<NA;
}
else if(SA>10501 && SA<15000)
{
COM=(11*SA)/100;
std::cout<<"Commission is:"<<COM;
NA=BS+COM;
std::cout<<"Net Salary is:"<<NA;
}
else if(SA>15000)
{
COM=(15*SA)/100;
std::cout<<"Commission is:"<<COM;
NA=BS+COM;
std::cout<<"Net Salary is:"<<NA;
}
else
{
std::cout<<"Invalid Input:";
}
return 0;
}
