#include <iostream>

using namespace std;
int main()
{
  int ID;
  string name;
  string department; 
  double salary; 
  

  cout<< "How many employees are there: " << endl;
  cin >> employees;
  cout << employees; 

  ofs.open ("employees.txt");
  if (ofs.fail())
  {
    cerr << "files open error";
    exit(0);

  }
  ofs << employees << endl;

  for (int i = 0; i < employees; i ++)
  {
    cout <<"Enter your Employee ID: " << endl;
    cin >> ID;
    ofs << ID << " ":

    cout << "What is your name?: " << endl;
    cin >> name; 
    ofs << name << " ";

    cout << "What is the name of your department?; " << endl;
    cin >> department; 
    ofs << department << " ";
    
    cout << "How much do you make? : " << endl; 
    cin >> salary; 
    ofs << salary; 

    ofs << endl;
  }
  ofs.close();
}
