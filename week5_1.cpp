#include<iostream>
using namespace std;
int main()
{
	string str,sstr;
	cout<<"Enter a string : ";
	getline(cin,str);
	
	{

	int t;
	cout<<"\nEnter sustring and position ";
	cin>>sstr;
	cin>>t;
	int size=sstr.length()+str.length()+1,temp=0,i=0;
	char newstr[size];
	for(i=0;i<size;i++)
	{
		if(i==t-1)
		{
			int k=0;
			while(sstr[k]!='\0')
			{
				newstr[i]=sstr[k];
				i++;
				k++;
			}
		}
		newstr[i]=str[temp++];
	}
	
	newstr[i]='\0';
	cout<<"\nNew String : "<<newstr;
	}
	
	
	{
		int nc,p;
		cout<<"\n\nEnter the no of characters to be deleted and position : ";
		cin>>nc>>p;
		int size=str.length()-nc,k=0;
		char newstr[size];
		for(int i=0;i<size;i++)
		{
			if(i==p-1)
			k+=nc;
			newstr[i]=str[k];
			k++;
		}
		cout<<"New String : "<<newstr;
	}

	return 0;
}
