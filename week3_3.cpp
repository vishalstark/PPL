#include<iostream>
using namespace std;
int main()
{
	int k;
	cin>>k;
	
	int n=2;
	while(n<k)
	{
		int flg=0;
		for(int i=2;i<=n/2;i++)
		if(n%i==0)
		{
			flg=1;
			break;
		}
		if(flg==0)
		cout<<n<<" ";
		n++;
	}
	return 0;
}
