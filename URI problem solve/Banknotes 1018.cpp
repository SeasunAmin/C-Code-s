#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={100,50,20,10,5,2,1};
	int x,i;
	int note_100;
	
	cin>>x;
	
	note_100 = x/arr[0];
	
	int note_50 = x - (arr[0]*note_100);
	note_50 = note_50/arr[1];
	
	
    int	note_20 = x - (arr[1]*note_50+arr[0]*note_100) ;
    note_20 = note_20/arr[2];
    
    int	note_10 = x - (arr[1]*note_50 + arr[0]*note_100 + arr[2]*note_20) ;
    note_10 = note_10/arr[3];
    
    int	note_5 = x - (arr[1]*note_50 + arr[0]*note_100 + arr[2]*note_20 + arr[3]*note_10) ;
    note_5 = note_5/arr[4];
    
    int	note_2 = x - (arr[1]*note_50 + arr[0]*note_100 + arr[2]*note_20 + arr[3]*note_10 + arr[4]*note_5);
    note_2 = note_2/arr[5];
    
    int	note_1 = x - (arr[1]*note_50 + arr[0]*note_100 + arr[2]*note_20 + arr[3]*note_10 + arr[4]*note_5 + arr[5]*note_2);
	note_1 = note_1/arr[6];

	cout<<note_100 <<" nota(s) de R$ 100,00"<<endl;
	
	cout<<note_50 <<" nota(s) de R$ 50,00"<<endl;
	
	cout<<note_20  <<" nota(s) de R$ 20,00"<<endl;
	cout<<note_10 <<" nota(s) de R$ 10,00"<<endl;
	
	cout<<note_5 <<" nota(s) de R$ 5,00"<<endl;
	
	cout<<note_2 <<" nota(s) de R$ 2,00"<<endl;
	cout<<note_1 <<" nota(s) de R$ 1,00"<<endl;
}
