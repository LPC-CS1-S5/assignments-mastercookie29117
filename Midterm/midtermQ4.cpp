#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>


using namespace std;
int getRdnum(void)

int main()
{
  int n1, n2;

  cout << "Here is your random number: " << n1 << endl;

  cout << "Here is your random number: " << n2 << endl; 

  cout << "Here is your numbers combined " << getRdnum(n1,n2) << endl;




}

int getRdnum()
{
  n1 = rand() % 5;

}

int getRdnum(n2)
{
  n2 = rand() % n1 + 1;
}

int getRdnum(n1,n2)
{
  n3 = rand() % n2 + n1 + 1;

}