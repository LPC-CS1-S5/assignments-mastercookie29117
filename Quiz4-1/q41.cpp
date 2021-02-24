#include <iostream>
using namespace std;

int main()
{
  int input

  cout << "Which area would you like to calculate? Pick 1 through 4 \n\n"
  cout << "1. Calculate the Area of a Circle \n\n"
  cout << "2. Calculate the Area of a Rectangle \n\n\"
  cout << "3. Calculate the Area of a Triangle \n\n"
  cout << "4. Quit \n\n"
  
  cin >> input

  if (input == 1)
    cout << "Area = 3.14159 * r squared"
  else if (input == 2)
    cout<< "Area = lenght * width" 
  else if (input == 3)
    cout << "Area = base * hieght * .05 "
  else
    cout << "Sure thing! thanks for using the app" 
  break

  return 0;
}