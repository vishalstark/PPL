#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr1[50], arr2[50], size1, size2, size, i, j, k, merge[100];
	cout<<"Enter Array 1 Size : ";
	cin>>size1;
	cout<<"Enter Array 1 Elements : ";
	for(i=0; i<size1; i++)
	{
		cin>>arr1[i];
	}
	cout<<"\nEnter Array 2 Size : ";
	cin>>size2;
	cout<<"\nEnter Array 2 Elements : ";
	for(i=0; i<size2; i++)
	{
		cin>>arr2[i];
	}
	for(i=0; i<size1; i++)
	{
		merge[i]=arr1[i];
	}
	size=size1+size2;
	for(i=0, k=size1; k<size && i<size2; i++, k++)
	{
		merge[k]=arr2[i];
	}
	cout<<"\nNow the new sorted array after merging is :\n";
	sort(merge,merge+size);
	for(i=0; i<size; i++)
	{
		cout<<merge[i]<<" ";
	}
	return 0;
}
