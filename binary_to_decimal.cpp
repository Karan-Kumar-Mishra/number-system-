#include<iostream>
#include<stdio.h>
using namespace std;
//binary to decimal number conversion 
int binary_to_decimal(int n)
{
  int ans=0;
  int x=1;
  while(n>0)
  {
   int y=n%10;
   ans += x*y;
   x *=2;
   n/=10;
  }
  return ans;
}
int main ()
{
  int num;
  cout<<"enter the binary number =>"<<endl;
  cin>>num; 
  cout<<"decimal number =>"<<binary_to_decimal(num);
  return 0;
}