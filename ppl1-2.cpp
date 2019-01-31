#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the value of a and b : ";
	cin>>a>>b;
	cout<<"a plus b = "<<a-(~b)-1;
	return 0;
}
