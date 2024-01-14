#include<iostream>
using namespace std;
void swap(int &x,int &y);
int main()
{
    int a,b;
    cout<<"enter two number=";
    cin>>a>>b;
    swap(a,b);
    return 0;
}
void swap(int &x,int &y)
{
  int k;
  k=x;
  x=y;
  y=k;
  cout<<"swap is " << x<< "  " << y;
}