#include<iostream>
using namespace std;

int main ()
{
    long int salary;

    cout<<"Enter salary: ";
    cin>>salary;

    if (salary<150000)
    {
        cout<<"Current tax rate on given income is 0 thus no reduction in salary  is necessary";
    }
    else if (salary>150000&&salary<300000)
    {
        cout<<"20% tax is charged on your current salary,your current salary is:"<<endl;
        cout<<salary*0.8<<endl;
        cout<<"Your income tax is "<<salary*0.2<<endl;
        
        
    } 
    else if (salary>300000)
    {
        cout<<"30% tax rate is charged for your current salary, your current salary with tax deductions is:"<<endl;
        cout<<salary*0.7<<endl;
        cout<<"Your income tax is "<<salary*0.3<<endl;
        
    }

}