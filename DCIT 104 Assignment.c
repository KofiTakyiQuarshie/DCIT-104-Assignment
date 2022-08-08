#include <iostream>
#include <cmath>
#include <limits>
#include <climits>

using namespace std;

bool isPrime(int Number){
  for(int i = 2; i < Number; i++){
    if (Number % i == 0){
      return false;
    }
  }
  return true;
}
int main(){
 int range;
  cout << "Please enter the range:" << endl;
  cin >> range;
  int Sum = 0;
  for(int i = 1; i < range; i++){
    bool prime = isPrime(i);
    if(prime){
      Sum += i;
    }
  }

  cout << "The sum of the Prime Numbers within the range 0 to " << range << " is " << Sum - 1 <<endl;

return 0;
}
