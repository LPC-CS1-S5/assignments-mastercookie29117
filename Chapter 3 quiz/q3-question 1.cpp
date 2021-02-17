#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
  int num1, num2, num3, average;
  // setting variables to call

  // creating random generation for each number
  srand(time(0));

  num1 = rand() % 100;
  num2 = rand() % 100;
  num3 = rand() % 100; 
  
  //creating the equation to calculate the random numbers to their average.

  average = num1 + num2 + num3 / 3
  
  //output of the equation to the console.

  cout << "The three numbers are " << num1 << setprecision(5) << " " << num2 << setprecision(5) << " " << num3 << setprecision(5) << " and their average is " << average << " ." 

  return 0


}