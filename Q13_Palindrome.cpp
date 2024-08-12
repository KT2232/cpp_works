#include <iostream>
using namespace std;

int main ()
{
    int n,num,digit,rev=0;
    cout<<"Enter a number: ";
    cin>>n;

    num=n;

   do
   {
    digit = num%10;
    rev=(rev*10)+digit;
    num=num/10;
   }while(num!=0);

   cout<<"Reversed number is "<<rev<<endl;

   if(n==rev)
   cout<<"Palindrome";
   else
   cout<<"Not palindrome";

   return 0;

}