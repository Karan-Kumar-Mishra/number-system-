#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int number,r;
    int total=0;
    cout<<"enter the decimal number =>"<<endl;
    cin>>number;
    while(number>0)
    {
        r=number%16;
        total=(total*16)+r;
        number=number/16;
    }
    cout<<"hexadecimal => "<<endl;
    while(total>0)
    {
        r=total%16;
        total=total/16;
        if(r==10)
        {
            cout<<"A";
        }
        else if(r==11)
        {
            cout<<"B";
        }
        else if(r==12)
        {
            cout<<"C";
        }
        else if(r==13)
        {
            cout<<"D";
        }
        else if(r==14)
        {
            cout<<"E";
        }
        else if(r==15)
        {
            cout<<"F";
        }
        else
        {
            cout<<r;
        }
    }
    return 0;
}