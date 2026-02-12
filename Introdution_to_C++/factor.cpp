#include <iostream>
using namespace std;

int main(){
  long long n, m;
  cin >> n >> m;

  if (n % m == 0){
    cout << "Yes";
  } else
  {
    cout << "No";
  }
  return 0;
}  