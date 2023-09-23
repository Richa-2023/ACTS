#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b,digit;
    cin>> a>> b;
    
    
    for(int i=a;i<=b;i++)
    {
        if(i<=9)
        {
                switch(i)
            {
                case 1:cout<<"One "<<endl;
                    break;
                case 2:cout<<"Two "<<endl;
                    break;
                case 3:cout<<"Three "<<endl;
                    break;
                case 4:cout<<"Four "<<endl;
                    break;
                case 5:cout<<"Five "<<endl;
                    break;
                case 6:cout<<"Six "<<endl;
                    break;
                case 7:cout<<"Seven "<<endl;
                    break;
                case 8:cout<<"Eight "<<endl;
                    break;
                case 9:cout<<"Nine "<<endl;
                    break;
                    
            }
        }
        else
        {
            if(i%2==0)
            {
                cout<< "even"<<endl;
            }
            else
            {
                cout<< "odd" << endl;
            }
        }
    }
    
    
    return 0;
}

