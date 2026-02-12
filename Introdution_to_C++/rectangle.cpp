#include <iostream>
using namespace std;
 
int main(){
 
  int l, b;
  cin >> l >> b;
 
  int Area = l * b;
  int Perimeter = 2 * (l + b);
 
  cout << "Area = " << Area << endl;
  cout << "Perimeter = " << Perimeter << endl;
 
  return 0;
 }