#include<iostream>
using namespace std;
class complex
{
    private:
      int a,b;
    public:
      void setA(int x, int y)
      {
          a=x;;
          b=y;
      }
      void getA()
      {
          cout<<a<<"+"<<b<<"i";
      }

};
int main()
{
    complex c1,c2;
    c1.setA(5,8);
    c1.getA();
   return 0;
}
