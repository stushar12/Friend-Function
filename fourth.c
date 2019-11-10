#include<iostream>
using namespace std;
class imaginary
{
  int real;
  int imag;
public:
  void get(int a,int b)
  {
    real=a;
    imag=b;
  }
  void show()
  {
    cout<<"Real part is ="<<real<<endl;
    cout<<"Imaginary part is ="<<imag<<endl;
  }
  friend void operator - (imaginary &obj);
};
void operator -(imaginary &obj)
{
  obj.real=-(obj.real);
  obj.imag=-(obj.imag);
}
int main()
{
  imaginary X;
  X.get(10,-5);
  X.show();
  - X;

  X.show();

}
