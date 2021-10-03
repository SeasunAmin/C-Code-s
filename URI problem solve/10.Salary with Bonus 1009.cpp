#include<bits/stdc++.h>
using namespace std;

int main()
{
    double fs,ps,r;
	
	string name;
	
    cin>>name;	
	cin>>fs>>ps;
	
	r = fs+ps*15/100; 
		
	cout<<"TOTAL = R$ " <<fixed <<setprecision(2) <<r <<endl;		
   
}
