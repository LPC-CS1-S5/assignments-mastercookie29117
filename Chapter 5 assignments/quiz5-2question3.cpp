#include <iostream>
using namespace std;

int primenum(int);
int main()

{
  bool primenumber; 
  for (int n =2; n <100; n++){
    primenumber = primenum

    if (primenumber == true)
      cout<<n<<" ";
  }
  return 0;

  
}

int primenum(int n) {
  bool primenumber = true;

  for (int i = 2; i <= n/2; i++) {
    if (n%i == 0) {
      primenumber = false;
      break

    }
  }
  return primenumber; 
}