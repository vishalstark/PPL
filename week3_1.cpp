#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b;
	float result;
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	cout<<"\nEnter operand : ";
	char op=getche();
	int flg=1;
	switch(op)
	{
		case '*':
			result=a*b;
			break;
		case '+':
			result=a+b;
			break;
		case '-':
			result=a-b;
			break;
		case '/':
			result=a/b;
			break;
		case '%':
			result=a%b;
			break;
		default:
			cout<<"Try again";
			flg=0;
			break;
	}
	if(flg==1)
	cout<<"\nResult = "<<result;
	
	return 0;
}
