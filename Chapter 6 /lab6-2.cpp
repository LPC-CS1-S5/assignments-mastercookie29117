#include <iostream>

using namespace std;

int main()
{
  double nthpowern(int n) {
    int i;
    double nthpower = 1/2;
    double result; 
    for (i=0; i<n; i++)
    {
      result *= nthpower;
    }
  }
  void powernumbers(int base, int exponent)
  {
    int i; 
    int nthpower=1;
    for (i =1; i<=exponent; i++)
    {
      nthpower *= base;
      cout << "Power of " << i << nthPower << endl;
    }
  }

  cout << "Enter in the number you would like to convert: " << endl;
  cin << n << endl;

 
}

// Usually, the functions shoud be declared outside of main function

// Your functions are not called in main.
