#include <iostream>
#include <iomanip>

using namespace std;

class X{
  public:
    int m_value;
};
class Y: public X{
  public:
    int m_value;
};
class Z: public Y{
  public:
    Z(int vx, int vy, int vz){
//(1)
      X::m_value = vx;
      Y::m_value = vy;
      this->m_value = vz;
    }
  public:
    int m_value;
};

int main(){
  Z obj(1,2,3);
//(2)
  cout << obj.X::m_value << " " << obj.Y::m_value << " " << obj.Z::m_value << endl;
  return 0;
}
