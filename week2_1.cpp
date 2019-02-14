#include<iostream>
using namespace std;
int main()
{
	long int n;
	cin>>n;
	
	if(n>0)
	{
		long int copy=n,sum=0;
		while(copy!=0)
		{
			sum+=copy%10;
			copy/=10;
		}
		cout<<"Sum of individual digits of "<<n<<" = "<<sum;
	}
	else
	{
		cout<<"\nError : Please enter a positive number";
	}
	return 0;
}
