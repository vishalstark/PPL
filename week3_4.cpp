#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a 3-digit number : ";
	cin>>n;
	if(n>=100 && n<1000)
	{
		int copy=n,sum=0;
		while(copy!=0)
		{
			int dig=copy%10;
			sum+=dig*dig*dig;
			copy/=10;
		}
		if(sum==n)
		cout<<"\nArmstrong Number : ";
		else
		cout<<"\nNot an Armstrong Number : ";
	}
	else
	{
		cout<<"Try again later";
	}
	return 0;
}
