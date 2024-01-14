// Define a class ReverseNumber and define an instance member function to find
//Reverse of a Number using class
#include<iostream>
using namespace std;
class reverse
{
    private:
      int a;
      int k,temp;
    public:
      void set(int x)
      {
          a=x;
      }
      void get()
      {
         
         
           k=a%10;
           temp=k;
           cout<<temp;
           a=a/10;
           k=a%10;
           temp=k;
           cout<<temp;
           a=a/10;
           k=a%10;
           temp=k;
           cout<<temp;
           a=a/10;
         
         
          
      }
};
int main()
{
    reverse c1;
    c1.set(123);
    c1.get();
   return 0;
}