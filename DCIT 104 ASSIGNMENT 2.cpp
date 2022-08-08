#include <iostream>
#include <cmath>
#include <limits>
#include <climits>

using namespace std;

int main(){
int Number = 2;
int Sum = 0;
int Average;

while (Number < 10000){
    Sum += Number;
    Number += 2;
}
Average = Sum / (1000/2);
cout << "The Average of the sum of even numbers is " << Average << endl;
return 0;
}
