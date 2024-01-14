#include<iostream>
using namespace std;
void prime(int x );
int main()
{
    int i,x,count=0;
    cout<<"enter the number=";
    cin>>x;
    prime(x);
   return 0;
}
void prime(int x )
{
    int i,count=0;
    for ( i = 1; i <=x; i++)
    {
        if (x%i==0)
        {
            count++;
        }
        
    }
    if (count==2)
    {
     cout<<"prime number";
    }
    else
    {
        cout<<"not prime";
    }
    
    
}