// Write a program that  stores the following values in five different variables:

// 28, 32, 37, 24, and 33.

// The program should first calculate the sum of these five variables and store the result in a separate variable named sum .
// Then, the program should divide the sum variable by 5 to get the average.
// Display the sum and average with precision 3 on the screen.
 
//Joshua Stallard

#include <iostream>

using namespace std;

int main();

{
  int num_1 = 28;
  int num_2 = 32;
  int num_3 = 37;
  int num_4 = 24;
  int num_5 = 33;

  int sum = num_1 + num_2 +num_3 + num_4 + num_5;

  double average = sum / 5;

  cout << "The total is " << average << endl;


}