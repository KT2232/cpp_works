#include <iostream>
using namespace std;

int main ()
{
    int m,n,pow=1;

    cout<<"Enter number: ";
    cin>>m;
    cout<<"\nEnter exponent: ";
    cin>>n;

    while(n!=0)
    {

        pow = pow*m;
        --n;
        
    }
        cout<<pow;


    return 0;
}
