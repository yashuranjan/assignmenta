//Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int add(int,int,int=0);
int main()
{
    int a,b,c,k,x,y,z;
    cout<<"enter the number=";
    cin>>a>>b>>c;
    cout<<"the sum of two number is "<<add(a,b);
    cout<<endl;
    cout<<"the sum of two number is "<<add(a,b,c);

   return 0;
}
int add(int x,int y,int z)
{
    return x+y+z;
}