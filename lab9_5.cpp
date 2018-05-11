#include <iostream>
using namespace std;
class X{
public:
  /*1*/
  void display(){
    cout << "Type of \"this\" object is: Class X" << endl;
  }
};

class Y: public X{};

class Z: public Y{
private:
  using X::display;
};

int main(){
  X x;
  Y y;
  Z z;
  x.display();
  y.display();
//  z.display();
}
