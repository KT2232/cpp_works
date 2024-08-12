
#include <iostream>
using namespace std;
 

bool isprimeno(int n)
{
    
    if (n == 1 || n == 0)
        return false;
 
    for (int i = 2; i < n; i++) 
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
 
int main()
{
    int num;
    cout<<"Enter number: "<<endl;
    cin>>num;
 
    for (int i = 1; i <= num; i++) 
    {
        if (isprimeno(i))
            cout << i << " ";
    }
 
    return 0;
}