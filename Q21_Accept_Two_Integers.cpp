#include <iostream>
using namespace std;

int main  ()
{
    int num1,num2;
    char operation;
    cout<<"Enter Value for Number 1:";
    cin>>num1;

    cout<<"Enter Value for Number 2:";
    cin>>num2;



    cout<<"Select Operation you wish to perform: ";
    cin>>operation;
    switch (operation)
    {
        case '+':
        cout<<num1<<" + "<<num2<<" comes out as "<<num1+num2;
        break;

        case '-':
        cout<<num1<<" - "<<num2<<" comes out as "<<num1-num2;
        break;

        case '*':
        cout<<num1<<" * "<<num2<<" comes out as "<<num1*num2;
        break;

        case '/':
        cout<<num1<<" / "<<num2<<" comes out as "<<num1/num2;
        break;

        default:
        cout<<"Invalid choice";
        break;

    }


}