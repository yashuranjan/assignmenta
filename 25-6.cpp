//Define a class Rectangle and define an instance member function to find the area of
//the rectangle
#include<iostream>
using namespace std;
class rectangle
{
   private:
     int a,b,sum;
   public:
     void setA(int x,int y)
     {
        a=x;
        b=y;
     }
     void rect()
     {
      sum=a*b;
      cout<<"the lenhth of "<<a<<"and"<<b<<"is"<<sum;
     }
};
int main()
{
   rectangle c1;
   c1.setA(4,5);
   c1.rect();
   return 0;
}