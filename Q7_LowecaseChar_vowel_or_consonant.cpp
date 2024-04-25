#include <iostream>
using namespace std;

int main ()
{
    char a;
    cout<<"Enter a lowercase char: ";
    cin>>a;

    if (a==97||a==65)
    {
        cout<<"Given character is vowel";
    }  else if (a==101||a==69)
    {
         cout<<"Given character is vowel";
    } else if (a==105||a==73)
    {
         cout<<"Given character is vowel";
    } else if (a==111||a==79)
    {
         cout<<"Given character is vowel";
    } else if (a==117||a==85)
    {
         cout<<"Given character is vowel";
    } else {
        cout<<"Given Char is consonant";
    }

    return 0;
}