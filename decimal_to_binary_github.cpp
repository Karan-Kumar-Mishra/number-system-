#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int number,binary=0;
	cout<<"enter any number =>"<<endl;
	cin>>number;
	
	while(number!=0)
	{
	binary=(binary*10)+(number%2);
	number=number/2;
	}
	cout<<"binary number is =>"<<endl;
	while(binary>0)
	{
		cout<<binary%10;
		binary=binary/10;
	}
	return 0;
}