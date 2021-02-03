#include <iostream>

using namespace std;

int main()
{
  double celsius;
  double fahrenhiet;

  cout << "Enter the tempreature in Celsius" << endl;
  cin >> celsius;

  fahrenhiet = 9/5 * celsius + 32;

  cout << "The temprature " << celsius << " is " << fahrenhiet << " in Fahrenhiet" << endl;

  return 0;
}