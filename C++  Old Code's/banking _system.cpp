#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
//global declaration
int total = 1000;
int a,x,d=0,w=0,t=0;

 
int main()
{
	
	while(1)
    {
   	
    cout <<"      WELCOME TO X BANK"<<endl;
    
	for(int dot =1;dot<=33;dot++)
	    cout<<".";		
   		cout<<endl;				
				
    
	cout <<"            MENU" <<endl;   
		for(int dot =1;dot<=33;dot++)
   				cout<<"." ;
   				cout<<endl;
    
	
   	   cout <<"	1.Diposite\n";
	   cout <<"	2.Withdrow\n";
	   cout <<"	3.Transfer\n";
	   cout <<"	4.Check Detail's\n";
	   cout <<"	5.Exit\n\nEnter your choice : ";
       cin>>a;
       system ("cls");
   		
		switch (a)
     	   { 	
   			case 1 :
   				cout << "	**YOUR DIPOSITE REQUEST IS ACCEPTED**\n";
				for(int dot =1;dot<=50;dot++)
   				cout<<"." ;
   				cout<<endl;
   				
				cout<<"	How much you want to diposit : ";
   				cin>>d;
   				system ("cls");
   				total+=d;
   				cout<<"	Your diposit is successfully done" <<endl;
   				cout<<"\n	PRESS ANY KEY TO BACK MENU"; 
				getch();
   				system ("cls");
				break;
   			
   			case 2 :
   				cout << "	**YOUR WITHDROW REQUEST IS ACCEPTED**\n";
   				for(int dot =1;dot<=50;dot++)
   				cout<<"." ;
   				cout<<endl;
   				
				cout<<"	How much you want to withdrow : ";
   				cin>>w;
   				system("cls");
   				
   				if(w<total)
   				{
   					total-=w;
   					
				cout <<"	Withdrow is successfully done "<<endl;
   			   
				}
   				
				else
   				 cout<<"	 Not Possible"<<endl;
   				 cout<<"\n   PRESS ANY KEY TO BACK MENU";
   				getch();
   				system ("cls");
				break;
   		
		   	case 3 :
		   		cout << "	**YOUR TRANSFER REQUEST IS ACCEPTED**"<<endl;
					  
				for(int dot =1;dot<=50;dot++)
   				cout<<"." ;
   				cout<<endl;
   				
				cout<<"	How much you want to transfer : ";
   				cin>>t;
   				system("cls");
   				
   				if(t>total)
   				   {
   				   	cout <<"	Not possiable"<<endl;
   				    cout<<"\n   PRESS ANY KEY TO BACK MENU";
				   }
   				else
   			       {
   			       	    total-=t;
   			       		cout<<"		Transfer is successfully done" <<endl;
   				        cout<<"\n		PRESS ANY KEY TO BACK MENU"; 
				   }
		        getch();
		        system ("cls");
				break;
		   case 4 :
		   	    
   				cout<<"        DETAIL'S OF ACCOUNT\n";
   				for(int dot =1;dot<=35;dot++)
   				cout<<"." ;
   				cout<<endl;
   				
				cout <<"	Diposit  = "<<d  <<endl;
   				cout <<"	Withdrow = "<<w  <<endl;
   			  	cout <<"	Transfer = "<<t  <<endl;
   			
			    for(int dot =1;dot<=35;dot++)
   				cout<<"." ;
   				cout<<endl;
   			  	cout <<"	Total Balance = "<<total<<" $"<<endl; 
                
				cout<<"\n\n	PRESS ANY KEY TO BACK MENU";     	
 		        getch();
 		        system ("cls");
				break;
		    
			case 5:
		    	exit(0);
		    	break;
		   
		   default :
		       cout<<"Invalid"<<endl<<endl;
		       cout<<"PRESS ANY KEY TO BACK MEMU"; 
			   getch();
			   system ("cls");
		  }
 		
		
	
	}
	
  
	getch();
}
