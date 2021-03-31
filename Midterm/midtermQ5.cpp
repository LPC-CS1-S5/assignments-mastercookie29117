#include <iostream>
#include <fstream>

using namespace std;


int getInput(int)
int isSame(int)
int intDivision(int)
int filewrite(int)
int main()
{
  getInput()
  isSame()
  intDivision()
  filewrite()
  main()


}

int getInput()
{
  cout << "What are your inputs?\n" ;
  cin >> n1 >> n2 >> endl;

}

int isSame()
{
  if (n1 = n2)
    cout << "This does not work" << endl;

}
int intDivision()
{
  intDivision = n1/n2;

}
int filewrite()
{
  ofstream outputFile;
  int n1, n2;

  outputFile.open("division.txt")

  outputFile << "Here is your result: " << intDivision << " ." <<endl;

  outputFile.close()
  cout<< "Done!\n"
  return 0;



}