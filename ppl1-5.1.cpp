#include<iostream>
using namespace std;
int main()
{
	float x,y,res;
	cout<<"Enter two numbers x and y : ";
	cin>>x>>y;
	res=(x+y)/(x-y);
	cout<<"(x+y)/(x-y) = "<<res;
	
	return 0;
}
