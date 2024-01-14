//Define a class Factorial and define an instance member function to find the Factorial
//of a number using class.
#include<iostream>
using namespace std;
class factorial
{
    private:
       int n;
       int f=1;
    public:
       void fact(int x)
       {
           n=x;
           
       }
       void print()
       {
           int i;
           for ( i=1; i<=n; i++)
           {
               f=f*i;
               
           }
           cout<<"the vale of "<<n<<" is "<<f;
           
       }
       
};
int main()
{
    factorial c1;
    c1.fact(5);
    c1.print();
     return 0;
}