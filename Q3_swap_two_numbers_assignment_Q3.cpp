#include <iostream>
using namespace std;

int main ()
{
     int a,b;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd Number: ";
    cin>>b;

    cout<<"Original Sequence is "<<a<<" and "<<b<<endl;

    int temp;
    temp = a;
    a = b;
    b = temp;

    cout<<"After swapping: "<<a<<" and "<<b;
}