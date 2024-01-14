#include<iostream>
using namespace std;
int high(int y);
int main()
{
    int x;
     cout<<"enter the number=";
     cin>>x;
     cout<<"the larest number is "<<high(x);
     
    return 0;
}
int high(int y)
{
    int l=0,r;
    while (y>0)
    {
        r=y%10;
        if (l<r)
        {
            l=r;
        }
        y=y/10;
        
    }
    return l;
}