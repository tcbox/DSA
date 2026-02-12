#include <iostream>
using namespace std;

int main(){
  long long n,m,k;
  cin >> n >> m >> k;

  long long min = n;
  long long max = n;

  if (m < min)
    min = m;
    if(k < min)
      min = k;
  
  if(m > max)
    max = m;
    if(k > max)
      max = k;

    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;

    return 0;
}  