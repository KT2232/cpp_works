#include <iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter 1st number:";
    cin>>a;

    
    cout<<"Enter 2nd number:";
    cin>>b;

    
    cout<<"Enter 3rd number:";
    cin>>c;

    if (a>b)
    {
        if (a>c)
        {
            cout<<"Number 1 which is "<<a<<" is biggest of three";
        }
        else 
        {
            cout<<"Number 3 which is "<<c<<" biggest of three";
        }
    }
    if (b>a)
    {
        if(b>c)
        {
            cout<<"number 2 is "<<b<<"greatest of three";
        }
        else 
        {
            cout<<"Number 3 which is "<<c<<" is greatest of three";
        }
    }
    if(c>a)
    {
        if (c>b)
        {
            cout<<"Number 3 which is "<<c<<" is greatest of three";
        }
        else  
        {
            cout<<"Number 2 which is "<<b<<" is greatest of three";
        }
    }
}