#include<iostream>
using namespace std;
int reverse(int n);
int main()
{
    int num;
   
    std::cout<<"Enter Number: ";
    std::cin>>num;

    int result=reverse(num);
    std::cout<<"\nReversed Number: "<<result;
    return 0;

}
int reverse(int n)
{
    int rem,rev=0;

    while(n!=0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
    
    return rev;  
}