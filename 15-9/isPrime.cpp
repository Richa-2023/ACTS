#include <iostream>
using namespace std;

bool isPrime(int);

int main() {

  int n;

  cout << "Enter a positive  integer: ";
  cin >> n;

  if (isPrime(n)==0)
    cout << n << " is a prime number.";
  else
    cout << n << " is not a prime number.";

  return 0;
}

bool isPrime(int n) {
int i;

  if (n == 0 || n == 1) {
    cout<<"Invalid Input..."<<endl;
  }

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      return 1;
      break;
    }
  }

  return 0;
}