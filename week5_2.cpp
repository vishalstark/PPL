#include<iostream>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	
	int k=str.length()-1,flg=0;
	for(int i=0;i<(str.length()/2);i++)
	{
		
		if(str[i]!=str[k])
		{
			flg=1;
			break;
		}
		k--;
	}
	
	if(flg==1)
	cout<<"\nNot a palindrome ";
	else
	cout<<"\nYes.!!! It is a plaindrome";
	return 0;
}
