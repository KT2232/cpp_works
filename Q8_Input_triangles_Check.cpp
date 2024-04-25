#include <iostream>
using namespace std;

int main ()
{
    int a,b,c;
    cout<<"Enter angle number 1:";
    cin>>a;
    cout<<"Enter angle number 2:";
    cin>>b;
    cout<<"Enter angle number 3:";
    cin>>c;

    if (a+b+c==180)
    {
    cout<<"Triangle angles sum as 180 degrees therefore triangle is valid";
    }
    else{
        cout<<"triangle is invalid";
    }
}