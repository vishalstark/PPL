#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int number;
	cout<<"Enter a three digit number : ";
	cin>>number;
	int s=0;
	while(number!=0)
	{
		int dig=number%10;
		s+=dig;
		number=number/10;
	}
	
	cout<<"sum of the digits = \n"<<abs(s);
	return 0;
}
