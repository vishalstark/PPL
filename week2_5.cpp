#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float sp,cp,per;
	 	
	cout<<"\nEnter the cost price : ";
	cin>>cp;
	cout<<"\nEnter the selling price : ";
	cin>>sp;
	per=(abs(sp-cp)/cp) * 100;
	
	if(sp-cp > 0)
	{
	cout<<":::  PROFIT of : "<<per<<" % ";		
	}
	else if(sp-cp < 0)
	{
	cout<<":::   LOSS of : "<<per<<" % ";		
	}
	else
	{
	cout<<"Neither profit nor loss";
	}
	return 0;
}
