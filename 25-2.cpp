//Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
//number of instance member variables and also define instance member functions to
//set values for time and display values of time.
#include<iostream>
using namespace std;
class time 
{
    private:
       int a,b,c;
    public:
    void t(int x,int y,int z)
    {
      a=x;
      b=y;
      c=z;
    }
    void print()
    {
        cout<<a<<"=hour "<<b<<"=minute "<<c<<"=second";
    }

};
int main()
{
    time c1;
    c1.t(4,23,54);
    c1.print();
    return 0;
}