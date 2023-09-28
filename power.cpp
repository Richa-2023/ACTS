#include<iostream>
int main()
{
    int a,b,i=1,result=1;
    std::cout<<"Enter Numbers: ";
    std::cin>>a>>b;

    while(i<=b)
    {
        result=result*a;
        i++;
    }
    std::cout<<"Power of Num: "<<result;
}