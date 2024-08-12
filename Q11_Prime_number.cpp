#include <iostream>
using namespace std;

int main ()
{
    int a,x=0;
    cout<<"enter number:";
    cin>>a;

    for (int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            x=1;
            break;
           
        }
      
    }
    if (x==0)
    {
        cout<<"Its prime number"<<endl;
    }
    else
    {
        cout<<"Its not prime number"<<endl;
    }
}
