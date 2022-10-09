#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int number;
    int r,total=0;
    cout<<"enter the decimal number =>"<<endl;
    cin>>number;
    while(number!=0)
    {
        r=number%8;
        cout<<r;
        total=(total*10)+r;
        number=number/8;
    }
    cout<<"octal number=>"<<endl;
    while(total>0)
    {
        r=total%10;
        cout<<r;
        total=total/10;
    }
    return 0;
}