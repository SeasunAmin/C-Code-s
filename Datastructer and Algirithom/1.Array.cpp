#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	
	cout<<"Enter the five Elements : ";
	
	for(int i = 0;i<5;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"The Elements are : "<<endl;
	
	for(int j = 0;j<5;j++)
	{
		cout<<" "<<&arr[j];
	}
}
