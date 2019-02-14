#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
	
	char ch;
	ch=getche(); //Without pressing enter it takes input
	cout<<endl;
	if(ch>=65 && ch<=90)
	cout<<":: Capital Letter ::";
	else if(ch>=97 && ch<=122)
	cout<<":: Small Letter ::";
	else if(ch>=48 && ch<=57)
	cout<<":: Number ::";
	else if(ch<=127)
	cout<<":: Special character ::";
	else
	cout<<"Try Again Later";
	cout<<endl;
	}
	return 0;
}
