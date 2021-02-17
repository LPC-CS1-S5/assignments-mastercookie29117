#include <iostream>
using namespace std;

int main()
{
  int num1, num2, num3, num4;

  num1 = 10;
  num2 = 5;
  num3 = 15;

  if (num1 < num2)
  {
    if (num2 < num3);
      cout << "Number 1 is the" << endl;

    else
    {
      if (num1 < num3)
        cout << "num1 is min" << endl;
      else
        cout << "num3 is min" << endl;

    }
      cout<< " " << endl;

  }
  else
  {
    if (num1 < num3)
      cout << "Num2 " << endl;
    else //num1 >= num3 
      if (num2 < num3 )
        cout << "num2" <<endl; 
      else 
        cout <<"Num 3" <<endl; 

    

  }
  
  
  if (num1 < num2) 
  {
    if (num1 < num3)
      cout << "Num1"<< endl; 
    else 
      cout << "Num3"<< endl;
  }
  else // num1 >= num2 
  {
    if (num2 < num3)
      cout << "Num2" << endl;
    else// num2 >= num3 
      cout << "num3" << endl;

  }
  }

  min = num1;

  if( min > num1)
    min = num2;
  if (min >num3)
    min= num3;
  if (min > num4)
    min = num4;
  
  cout << "Min " << min <endl;
}