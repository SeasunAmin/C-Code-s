#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m1,m2,u1,u2;
	double p1,p2,TOTAL;
	
	cin>>m1 >>u1 >>p1;
	cin>>m2 >>u2 >>p2;
	
	TOTAL = (u1*p1)+(u2*p2);
	
	cout<<"VALOR A PAGAR: R$ "<<fixed <<setprecision(2) << TOTAL <<endl;
 	return 0;
}

