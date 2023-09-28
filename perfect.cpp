#include<iostream>
int main()
{
    int num,i=1,sum=0;
    std::cout<<"enter number:";
    std::cin>>num;
    while(i<num)
    {
         if(num%i==0)
         {
            std::cout<<"\tFators: "<<i;
            sum=sum+i;
         }
         
         i++;
    }
    std::cout<<"\nSum Of factors: "<<sum;
    if(sum==num)
    {
        std::cout<<"\n\nPerfect Number.....";
    }
    else
    {
        std::cout<<"\nNot Perfect....";
  
    }
    
}