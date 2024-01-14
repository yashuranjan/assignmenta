#include<iostream>
using namespace std;
int main()
{
    int x,a=-1,b=1,c;
    cout<<"enter the number=";
    cin>>x;
    if (x==0)
    {
        cout<<"febonicc series";
    }
    c=a+b;
    while(c<x)
    {
     a=b;
     b=c;
     c=a+b;   
    }
    if (c==x)
    {
        cout<<"the number is fabonicc series";
    }
    else
    {
        cout<<"not fabonicc number";
    }
    
    
    
   return 0;
}