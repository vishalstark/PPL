#include<iostream>
using namespace std;
int main()
{
int a[10],i,m;
int n=0,p=0,e=0,o=0;
cout<<"Enter the Array elements : ";
for(i=0;i<5;i++)
cin>>a[i];

for(i=0;i<5;i++)
{
if(a[i]<0)
n++;
else
p++;
m=a[i]%2;
if(m==0)
e++;
else
o++;
}
cout<<"Even numbers are "<<e<<endl;
cout<<"Odd numbers are "<<o<<endl;
cout<<"+ve numbers are "<<p<<endl;
cout<<"-ve numbers are "<<n<<endl;
return 0;
}
