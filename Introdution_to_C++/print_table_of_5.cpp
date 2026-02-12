#include <iostream>
 
using namespace std;
 
int main(){
 
  const int number = 5;
  for (int i = 1; i <= 10; i++){
    cout << number << " * " << i << " = " << (number * i) << endl;
  }
  return 0;
}