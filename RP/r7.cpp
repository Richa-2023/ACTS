#include<iostream>
int reverse (int num);
int main()
{
int num,rev,rem,sum=0;

std::cout<<"Enter the number:";
std::cin>>num;

rev=reverse(num);
std::cout<<rev;

return 0;
}

int reverse (int num){
int rev,rem,sum=0;
while(num!=0)
{
rem=num%10;
sum=sum*10+rem;
num=num/10;
}
return sum;
 }
