#include <iostream>
using namespace std;

int main ()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if (num%5==0&&num%7==0)
    {
        cout<<"Number is divisible by 5 and 7";
    }
    else
    {
        cout<<"Number is not divisible by 5 and 7 at same time";
    }
}