#include<iostream>
using namespace std;
int main()
{
	int x,y,i,j;
	
	
	
	cin>>x>>y;
	int arr[x][y];
	
	for( i=0; i<x; i++)
	{
		for( j =0; j<y; j++)
		{
			cin>>arr[x][y];
		}
	}
	
	int qe;
	int ans = 0;
	
	cin>>qe;
	
	for(i=0;i<y;i++)
	{
		ans += arr[qe][i];
	}
	
	cout<<ans<<endl;
}
