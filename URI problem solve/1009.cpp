
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char name[30];
     double TOTAL ,salary,per;
     
     gets(name);
     cin>>salary >>per;
     
     TOTAL = salary + (per*15)/100;
    
    cout<<name <<endl;
    cout<<"TOTAL = R$ " <<fixed <<setprecision(2) <<TOTAL <<endl;	
    

}
