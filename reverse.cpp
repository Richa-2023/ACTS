#include<iostream>
int main()
{
    int num,rem,rev=0,temp;
   
    std::cout<<"Enter Number: ";
    std::cin>>num;
    temp=num;

    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    std::cout<<"\nReversed Number: "<<rev;
    
    return 1000;

}