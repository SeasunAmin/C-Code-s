#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>

using namespace std;
ofstream file;
int no,num;
double time;
int total ,bus = 0,truck = 0,car = 0,motor,cycile = 0;
int date,month,year;
void menu()
{
	string m;
	ifstream file1;
	file1.open("menu.txt");
	
	while(getline(file1,m))
	{
		cout<<m <<endl;
	}
		
}
void details()
{
	string d;
	ifstream file2;
	file2.open("park details.txt");
	
	while(getline(file2,d))
	{
		cout<<d <<endl;
	}
	
		
}
void login()
{
		
	cout<<"\n\t[-- HELLO DEAR WELCOME TO ADMIN PANALE--]"<<endl;
	cout<<"\n\t\t [FOLLOW THE INSTRACTION]\n";
	cout<<"   ------------------------------------------------------"<<endl;
		
	cout<<"\t\t Enter Day : ";
	cin>>date;

	cout<<"\t\t Enter Month : ";
	cin>>month;
	cout<<"\t\t Enter Year  : ";
	cin>>year;
	file.open("park details.txt",ios::out | ios::app);
	file<<"Date:"<<date <<"/" <<month <<"/" <<year<<endl;

}

void photo()
{
	string ph;
	ifstream file3;
	file3.open("car.txt");
	
	while(getline(file3,ph))
	{
		cout<<ph<<endl;
	}
		
}

int main()
{
	
	system("color 0A");
    	photo();	
	login();

	system("cls");
	
	
	while(1)

		{
			    menu();
				cout<<"\n\tEnter Vehicle  : ";
	            cin>>num;
	            
	        switch(num)
	        {
	         	case 1:
	   		    cout<<"\tEnter Registration No : ";
	   		    cin>>no;
	   		    cout<<"\tEnter Entry Time : ";
	   		    cin>>time;
	   		    file.open("park details.txt",ios::out | ios::app);
	   		    file<<"\t\tBuss " <<"\t\t" <<no <<"\t\t" <<time <<"\t\t" <<"90-Tk"<<endl;
	   		    bus +=90;
	   		    cout<<"\n\tSuccessfully Added..."<<endl;
	   	    	getch();
	   			system("cls");
				break;
	   			
				case 2:
	   			cout<<"\tEnter Registration No : ";
	   			cin>>no;
	   			cout<<"\tEnter Entry Time : ";
	   			cin>>time;
	   			file.open("park details.txt",ios::out | ios::app);
	   			file<<"\t\tTruck " <<"\t\t" <<no   <<"\t\t" <<time <<"\t\t"  <<"80-Tk"<<endl;
	   			truck +=80;
	   			cout<<"\n\tSuccessfully Added..."<<endl;
	   		    getch();
	   			system("cls");
				break;
	   	
	   			case 3:
	   			cout<<"\tEnter Registration No : ";
	   			cin>>no;
	   			cout<<"\tEnter Entry Time : ";
	   			cin>>time;
	   			file.open("park details.txt",ios::out | ios::app);
	   			file<<"\t\tCar " <<"\t\t" <<no   <<"\t\t" <<time <<"\t\t" <<"70-Tk "<<endl;
	   			car +=70;
	   			cout<<"\n\tSuccessfully Added..."<<endl;
	   			getch();
	   			system("cls");
	   	    	break;
	   	    
	   			case 4:
	   			cout<<"\tEnter Registration No : ";
	   			cin>>no;
	   			cout<<"\tEnter Entry Time : ";
	   			cin>>time;
	   			file.open("park details.txt",ios::out | ios::app);
	   			file<<"\t\tMotor" <<"\t\t" <<no   <<"\t\t" <<time <<"\t\t" <<"50-Tk"<<endl;
	   			motor +=50;
	   			cout<<"\n\tSuccessfully Added..."<<endl;
	   			getch();
	   			system("cls");
	   	    	break;
	   	    
	   			case 5:
	   			cout<<"\tEnter Registration No : ";
	   			cin>>no;
	   			cout<<"\tEnter Entry Time : ";
	   			cin>>time;
	   			file.open("park details.txt",ios::out | ios::app);
	   			file<<"\t\tCycile" <<"\t\t" <<no <<"\t\t" <<time <<"\t\t" <<"30-Tk"<<endl;
	   			cycile +=30;
	   			cout<<"\n\tSuccessfully Added..."<<endl;
	   	    	getch();
	   			system("cls");
				break;
	   	
	   			case 6 :
	   			system("cls");
	   			file.open("park details.txt",ios::out | ios::app);
	   			file<<"\t\t\t\t\t\t\t\t\tTotal = "<<total<<endl;
	   			details();
	   			
				cout<<"\n\n\t\t[ENTER ANY KEY TO BACK MAIN MENU....]"<<endl;
	   			
	   			getch();
	   			system("cls");
	   			break;
	   			
				case 7:
				 	
				file.open("park details.txt",ios::out | ios::app);
			
				file<<"_________________________________________________________________________________________"<<endl;
			
	   			exit(0);
	   			system("cls");
	   			break;
				
				default :
				system("cls");
		   		cout<<"Invalid..."<<endl;
				cout<<"\n\n\t\t[ENTER ANY KEY TO BACK MAIN MENU....]"<<endl;
	   			break;	
	  	  
			 }
			 
			total =bus+truck+car+motor+cycile;
			
	        file.close();		
		}
 	
}
