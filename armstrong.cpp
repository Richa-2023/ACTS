#include<iostream>
int main()
{
    int n,ctr=0;

    int digit,result,power_sum=0,i=1;
    std::cout<<"Enter Number: ";
    std::cin>>n;
    
    while(n!=0)
    {
        digit=n%10;
        result=digit*digit*digit;
        power_sum=power_sum+result;
        n=n/10;
    }
   // std::cout<<"Digit Count: "<<ctr;
   std::cout<<"Power Sum : "<<power_sum;
   if(power_sum == n)
   {
        std::cout<<"\nArmstrong Number: ";
   }
   else 
        std::cout<<"\nNot Armstrong Number: ";


    return 0;
}