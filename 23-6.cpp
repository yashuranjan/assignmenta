#include<iostream>
using namespace std;
int main()
{
    int x=5,y=10;
    cout<<"x= "<<x<< " y= "<<y;
    cout<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"x= "<<x<<" y= "<<y;
   return 0;
}