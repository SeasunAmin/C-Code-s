#include<bits/stdc++.h>
using namespace std;
int main()
{
	double A,B,C,tri,c,t,q,r;
	double pi = 3.14159;
	
	cin>>A >>B >>C;
	
	tri = 0.5*A*C;
	c =  pi*(C*C);
	t = (A+B)/2*C;
	q = B*B;
	r = A*B;
	
		    cout<<"TRIANGULO: "<<fixed <<setprecision(3) << tri <<endl;
			cout<<"CIRCULO: "<<fixed <<setprecision(3) << c <<endl;
			cout<<"TRAPEZIO: "<<fixed <<setprecision(3) << t <<endl;
			cout<<"QUADRADO: "<<fixed <<setprecision(3) << q <<endl;
			cout<<"RETANGULO: "<<fixed <<setprecision(3) << r <<endl;
	
}





