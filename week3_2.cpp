#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter the value of x : ";
	int x;
	cin>>x;
	double sum=1;
	for(int i=1;i<=5;i++)
	{
		int end=i*2;
		long sq=1,fact=1;
		for(int j=0;j<end;j++)
		sq*=x;
		for(int j=1;j<=end;j++)
		fact*=j;
		
		if(i%2!=0)
		sum=sum-(double(sq)/fact);
		else
		sum=sum+(double(sq)/fact);
	}
	cout<<"Result = "<<sum;
	return 0;
}
