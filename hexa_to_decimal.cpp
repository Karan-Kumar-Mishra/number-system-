#include<iostream>
#include<stdio.h>
using namespace std;
//hexadecimal to decimal number conversion
int hexa_to_decimal(string n)
{
   int ans=0;
   int x=1;
   int s=n.size();
   for(int i=s-1;i>=0;i--)
   {
     if(n[i]>='0' && n[i]<='9')
    {
      ans+= x*(n[i]-'0');
    }
     else if(n[i]>='A' && n[i]<='F')
    {
      ans += x *(n[i]-'A'+10);
    } 
    x *=16;
   }
  return ans;
}
int main()
{
  string str;
  cout<<"enter the number =>"<<endl;
  cin>>str;
  cout<<"in hexadecimal format => "<<hexa_to_decimal(str);
  return 0;
}