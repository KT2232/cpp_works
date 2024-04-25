#include <iostream>
using namespace std;

int main ()
{
    int num;
    int fact=1;

    cout<<"Enter number till which you want factorial of:";
    cin>>num;

    for (int i=1;i<=num;i++)
    {
       fact=fact*i;
       
    
    }
    cout<<fact;
}