#include<iostream>
#include<stdio.h>
using namespace std;
//octal to decimal number conversion 
int octal_to_decimal(int n)
{
 int ans=0;
  int x=1;
  while(n>0)
  {
   int y=n%10;
   ans += x*y;
   x *= 8;
   n /=10;
  }
 return ans;
}
int main ()
{
  int num;
  cout<<"enter the number =>"<<endl;
  cin>>num;
  cout<<"in decimal format =>"<<octal_to_decimal(num);
  return 0;
}