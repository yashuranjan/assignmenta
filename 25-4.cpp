#include<iostream>
using namespace std;
class counter
{
    private:
      static int k;
    public:
       counter()
       {
           k++;
       }
       void get()
       {
           cout<<k;
       }
};
int counter::k=0;
int main()
{
    counter c1,c2,c3;
    c1.get();
    c2.get();
    c3.get();
   return 0;
}