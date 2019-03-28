#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cout<<"Enter the number of elements and element to be found : ";
	cin>>n>>k;
	
	int a[n],count=0;
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
	if(a[i]==k)
	count++;
	}
	cout<<"Frequency = "<<count;
	return 0;
}
