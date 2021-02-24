#include <iostream>
using namespace std;

int main()
{
  int pick
  cout << "Which formula do you want to see?\n\n";
  cout << "1. Area of a circle\n\n";
  cout << "2. Area of a rectangle\n\n";
  cout << "3. Area of a cylinder \n\n";
  cout << "4. None of them. \n\n";

  cin >> pick;

  if (pick == 1); 
    cout << "Pi times radius squared\n"; 
  else if (pick == 2); 
    cout << "length times width\n"
  else if (pick == 3);
    cout << "Pi times radius squared times height\n"
  else if (pick == 4);
    cout << "Well okay then, good bye\n";
  else 
    cout << << "Not good with numbers, eh\n";
  
  return 0
}