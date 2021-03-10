#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  // declaring variables
  int ran1, ran2, ran3, ran4, ran5, min;
  // declaring random integers and 
  srand(time(0));

 // declaring random generation for numbers

  ran1 = rand() % 100
  ran2 = rand() % 100
  ran3 = rand() % 100
  ran4 = rand() % 100
  ran5 = rand() % 100

  //finding random numbers and printing out the mininum value of all.

  if (num1 <= num2 & num1 <= num3 & num1 <= num4 & num1 <= num5)
    cout << " Number " << num1 << " is the smallest number." << endl;
  if (num2 <= num1 & num2 <= num3 & num2 <= num4 & num2 <= num5)
    cout << " Number " << num2 << " is the smallest number. " << endl;
  if (num3 <= num1 & num3 <= num2 & num3 <= num4 & num3 <= num5)
    cout<< " Number " << num3 << " is the smallest number." << endl;
  if (num4 <= num1 & num4 <= num2 & num4 <= num3 & num4 <= num5)
    cout << " Number " << num4 << " is the smallest number. "<< endl;
  if (num5 <= num1 & num5 <= num2 & num5 <= num3 & num5 <= num4)
    cout<< "Number " << num5 << " is the smallest number. " << endl;
  else if (num1 = num2, num1 = num3, num1 = num4, num1 = num5, num2 = num3, num2 = num4, num2 = num5, num3 = num4, num3 = num5)
    cout<< "There is no mininum number and all numbers equal each other. " << end;
  break 
  
  return 0 
  



}