#include <iostream>

using namespace std;

bool input validate(int, int) // remove the space in function name
void getlistprime(int, int)

int main()
{
  int num1, num2;
  do {
    cout << "Enter two numbers :";
    cin >> num1 >> num2;

  } while( ! inputvalidate(num1, num2) );

  getlistprime(num1, num2);
}

// Need to implement the functions "inputvalidate()" and "getlistprime()"