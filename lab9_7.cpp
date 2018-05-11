#include <iostream>
#include <iomanip>
#include "Date.h"

using namespace std;

int main(){
  Date d1,d2;
  cin >> d1;
  cin >> d2;
  cout << d1 << endl;
  cout << d2 << endl;
  cout << (d1 < d2? "d1 < d2":"d1 >= d2") << endl;
  Date d3(25,2,2017);
  cout << d3.toString() << endl;
  return 0;
}
