#include <iostream>
using namespace std;

int main ()
{
    int n,j,sum=0;
    

    cout<<"Enter Higher limit for number: ";
    cin>>n;

    for(j=1;j<=n;j++)
    {
        
        if (j%2!=0)
        {
           sum=sum+j;
           
        }
        
        
    }
    cout<<sum;
}


