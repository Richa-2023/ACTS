#include<iostream>
void Palindrome(int num);
using namespace std;
int main()
{
    int num;
   
    std::cout<<"Enter Number: ";
    std::cin>>num;
    Palindrome(num);
    return 0;

}
void Palindrome(int num)
{
    int rem,rev=0,temp;
    temp=num;

    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    std::cout<<"\nReversed Number: "<<rev<<endl;
    if(temp==rev)
    {
        std::cout<<"\nPalindrome...";
    }
    else
    {
        std::cout<<"\nNot Palindrome...";
    }
}