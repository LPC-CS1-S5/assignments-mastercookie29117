// created by Joshua Stallard

#include <iostream>

using namespace std;

int main()
{
  float num_male, total_male, total_female, num_female, total_students; 

  cout << "How many students are in your class?" << endl; 
  cin >> total_students;

  cout << "How many students are male?" << endl; 
  cin >> num_male;

  total_male= num_male / total_students;

  cout>> "The total percent of male students is " << total_male << " . " << endl; 

  cout << "How many students are female? " << endl;
  cin >> num_femle;

  total_female = num_female / total_students;

  cout << "The total percent of female students is " << total_female << " ." << endl;

  return 0; 


}
