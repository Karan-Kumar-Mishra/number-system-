#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int number,r,i=0,total,k;

    cout<<"enter the hexadecimal number =>"<<endl;
    cin>>number;

    while(number>0)
    {
        r=number%10;
        if(to_string(r)=="A")
        {
            r=10;
        }
        else if(to_string(r)=="B")
        {
            r=11;
        }
        else if(to_string(r)=="C")
        {
            r=12;
        }
        else if(to_string(r)=="D")
        {
            r=13;
        } else if(to_string(r)=="E")
        {
            r=14;
        } else if(to_string(r)=="F")
        {
            r=15;
        }

        k=r*pow(16,i);
        total=k+total;
        number=number/10;
        i++;
    }
    cout<<"decimal number => "<<(total-1)<<endl;

    return 0;
}