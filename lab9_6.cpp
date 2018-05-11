#include <iostream>

using namespace std;

class Rectangle{
  int length, width;
public:
  Rectangle(int length,int width){
    this->length = length;
    this->width = width;
  }
  Rectangle():Rectangle(20,10){}
  void display(){
    cout << "length = " << length  << endl << "width = " << width << endl;
  }
  void set(int length,int width){
    this->length = length;
    this->width = width;
  }
  void getInfo(){
    cout << "Input length = ";
    int i;
    cin >> i;
    cout << "Input width = ";
    int j;
    cin >> j;
    set(i,j);
  }
  int getlength(){
    return length;
  }
  int getwidth(){
    return width;
  }
  float area(){
    return length * width;
  }
};

class Box: public Rectangle{
  int depth;
public:
  void display(){
    Rectangle::display();
    cout << "depth = " << depth << endl;
  }
  void getInfo(){
    cout << "Input length = ";
    int i;
    cin >> i;
    cout << "Input width = ";
    int j;
    cin >> j;
    cout << "Input depth = ";
    int k;
    cin >> k;
    set(i,j);
    this->depth = k;
  }
  float area(){
    int i = getlength();
    int j = getwidth();
    int k = depth;
    return 2 * (i*j+i*k+j*k);
  }
};

int main(){
  Box b;
  b.getInfo();
  cout << b.area();
  return 0;
}
