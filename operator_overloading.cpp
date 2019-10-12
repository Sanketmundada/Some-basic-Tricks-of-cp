#include <iostream>

using namespace std;

class Complex
{
    int real,img;
public:
    friend istream& operator>>(istream& i,Complex& c)
 {
     i>>c.real>>c.img;
     return i;
 }
    friend ostream& operator<<(ostream& o,Complex& c)
  {
      o<<c.real<<"+"<<c.img<<"i";
      return o;
  }
    friend Complex operator+(Complex& c1, Complex& c2)
      {

          Complex temp;
          temp.real=c1.real+c2.real;
          temp.img=c1.img+c2.img;
          return temp;
      }

     friend Complex operator-(Complex& c1, Complex& c2)
      {

          Complex temp;
          temp.real=c1.real-c2.real;
          temp.img=c1.img-c2.img;
          return temp;
      }
};





int main()
{
    cout << "Hello world!" << endl;
    Complex c1,c2,c3;
    cin>>c1;
    cin>>c2;
    cout << c1;
    cout << c2;
    c3=c1+c2;
    cout << c3;
    return 0;
}
