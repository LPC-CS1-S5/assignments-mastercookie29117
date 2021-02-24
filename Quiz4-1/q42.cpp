#include <iostream>
using namespace std;

int main()
{
  int weight, distance
  float shipping, total charge
  cout << "What is the weight and the distance you would like to ship your package? "

  cin >> weight
  cin >> distance

  if (weight <= 2) 
    shipping = 1.10
  else if (weight <= 2 or >= 6)
    shipping = 2.20
  else if (weight >= 6 or <= 10) 
    shipping = 3.70
  else if (weight >=10 or >= 20)
    shipping = 4.80
  break
  
  totalCharge = (distance /500.00)* shipping; 

  cout << " Your total shipping charges are " << totalCharge << " ."

  return 0 

}