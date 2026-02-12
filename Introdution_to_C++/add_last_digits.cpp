#include <iostream>
using namespace std;

int main(){
  int a,b;

  cin >> a >> b;

  int getLastA = a % 10 ;
  int getLastB = b % 10 ;

  int sum = getLastA + getLastB;
  cout << sum ;
  return 0;
}