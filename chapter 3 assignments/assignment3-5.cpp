#include <iostream>
#include <cstdlib>
#include <ctime>



using namespace std; 

int main()
{
  int num1, num2, num3,

  srand(time(0));

  num1 = random () % 100;
  num2 = random () % 100;
  num3 = random () % 100;

  cout << "The random number " << num1 << endl;
  cout << "The random number " << num2 << endl;
  cout << "The random number " << num3 << endl;

  return 0;
  
}