#include<iostream>
#include<conio.h>
using namespace std;
string name;
	class Student
	{
	
	
		public :
	      int id[5];
	      string name[20];
	      int phn[20];
	   
	     //Pure Virtual Function
    //virtual void information_box() = 0;

    virtual void data () //Virtual Function
    {
      cout<<" \n\n\tStudent information data.....!!!\n";
    }
		Student()
		 {
		 	id[1] = 101;
			name[1] = "Shifat";
			phn[1] = 1234567;
			
			id[2] = 102;
			name[2] = "Mariya";
			phn[2] = 1234568;
			
			id[3] = 103;
			name[3] = "Rafi";
			phn[3] = 1234569;
			
			id[4] = 104;
			name[4] = "Sakib";
			phn[4] = 12345610;
			
			id[5] = 105;
			name[5] = "Sabbir";
			phn[5] = 12345611;
			
		 };
		 void display()
  		  {
          
           for(int i = 1; i<=5; i++)
			  {
			     	 cout<<" Student ID = " <<id[i] <<endl;
			         cout<<" Student Name = " <<name[i] <<endl;
			     	 cout<<" Student Phone No :" <<phn[i]  <<endl;
			     	 
	   		         cout<<"\n";
			  }  	
	   	
	   	cout<<".............................................."<<endl;
          
  		  }
  		  
  		    ~Student()
    {
        cout << "\n\t\tStudent Destructor is Called\n"
             << endl;
    }

		 
	  

	
	};
	
class Marks : public Student
   {
	
	  public :
	  	 int bangla[5];
	  	 int english[5];
	  	 int math[5];
	  	
      Marks()
      {
      
      	bangla[1] = 91;
      	english[1] = 88;
      	math[1] = 85;
      	
      	bangla[2] = 82;
      	english[2] = 78;
      	math[2] = 55;
      	
      	bangla[3] = 87;
      	english[3] = 68;
      	math[3] = 59;
      	
      	bangla[4] = 85;
      	english[4] = 73;
      	math[4] = 79;
      	
      	bangla[5] = 77;
      	english[5] = 98;
      	math[5] = 81;
      	
      	
	  };
	
	void makrs()
	{
		for(int i = 1; i<=5; i++)
		{
					 cout<<"\n";
				     cout<<" Student ID = " <<id[i] <<endl;
			         cout<<" Student Name = " <<name[i] <<endl;
					 cout<<" Result of bangla = " <<bangla[i] <<endl;
					 cout<<" Result of english = " <<english[i] <<endl;
				     cout<<" Result of math = " <<math[i] <<endl;
		}
	 
	  cout<<".............................................."<<endl;
	}
	
	void m()
	{
		 cout<<"\n\t\tStudents Marks........!!!\n";
	}
	
   };	
	
class Result : public Student
    { 
      	public:
      		double ssc_gpa[5];
      		double hsc_gpa[5];
      		double cgpa[5];
      		
      		Result()
      		{
      			ssc_gpa[1] = 4.89;
      			hsc_gpa[1] = 4.96;
      			cgpa[1] = 3.56;
      			
      			ssc_gpa[2] = 4.90;
      			hsc_gpa[2] = 4.6;
      			cgpa[2] = 3.50;
      			
      			ssc_gpa[3] = 4.59;
      			hsc_gpa[3] = 4.68;
      			cgpa[3] = 3.21;
      			
      			ssc_gpa[4] = 4.00;
      			hsc_gpa[4] = 4.75;
      			cgpa[4] = 3.67;
      			
      			ssc_gpa[5] = 5.00;
      			hsc_gpa[5] = 5.00;
      			cgpa[5] = 3.69;
      			
      			
			};
			
			void result ()
			{
				for(int i = 1; i<=5 ; i++)
				{
					 cout<<"\n";
				     cout<<" Student ID = " <<id[i] <<endl;
			         cout<<" Student Name = " <<name[i] <<endl;
			         cout<<" SSC = " <<ssc_gpa[i] <<" HSC = " <<hsc_gpa[i] <<" CGPA = " <<cgpa[i] <<endl;
					
				}
				cout<<"Students Result......!!\n";
				cout<<".............................................."<<endl;
			}
	
	};	
	
//Virtual Base Class
class Sport : public Student
{
public:
   
    string n1 = "Football";
    string n2 = "Cricket";
    string n3 = "Chess";
  

    Sport()
    {
        cout << "\n\t\tSport Constructor is Called\n"
             << endl;
    }
    ~Sport()
    {
        cout << "\n\t\tSport Destructor is Called\n"
             << endl;
    }

  void sports()
  {
  	cout<<name[1] <<" Id :"<<id[1] <<endl ;
	cout<<"Play : "<<n1 <<endl<<endl;
	
	cout<<name[2] <<" Id :"<<id[2] <<endl;
	cout<<"Play : "<<n2 <<endl<<endl;
	
	cout<<name[3] <<" Id :" <<id[3] <<endl;
	cout<<"Play : "<<n3 <<endl<<endl;
	
	cout<<"...........................................";
  	
  }
   
    
};

class Dancing : public virtual Sport
{
public :
	string d1 = "Modern Dance";
	string d2 = "Clacical Dance";
	string d3 = "All type of Dance";
	
  Dancing()
    {
        cout << "\n\t\tDancing Constructor is Called\n"
             << endl;
    }
    ~Dancing()
    {
        cout << "\n\t\tDancing Destructor is Called\n"
             << endl;
    }

   void dance()
   {
   	
	
	cout<<"Name : "<<name[4] <<" Id "<<id[4] <<endl ;
	cout<<"Perform : "<<d1 <<endl<<endl;
	
	cout<<"Name : "<<name[2] <<" Id "<<id[2] <<endl;
	cout<<"Perform : "<<d2 <<endl<<endl;
	
	cout<<"Name : "<<name[3] <<" Id " <<id[3] <<endl;
	cout<<"Perform : "<<d3 <<endl<<endl;
	
	cout<<"..........................................."<<endl;
    
   }
	
};


class Debate : public virtual Sport
{
public:
	string db1 = "Bangladesh";
	string db2 = "International Things";
	string db3 = "National Problems";
	
	 Debate()
    {
        cout << "\n\t\tDebate Constructor is Called\n"
             << endl;
    }
    ~Debate()
    {
        cout << "\n\t\tDebate Destructor is Called\n"
             << endl;
    }
 
  void debate()
   {
   	
	
	cout<<"Name : "<<name[5] <<" Id :"<<id[4] <<endl ;
	cout<<"Debate on : "<<db1 <<endl<<endl;
	
	cout<<"Name : "<<name[2] <<" Id :"<<id[2] <<endl;
	cout<<"Debate on : "<<db2 <<endl<<endl;
	
	cout<<"Name : "<<name[1] <<" Id :" <<id[3] <<endl;
	cout<<"Debate on : "<<db3 <<endl<<endl;
	
	cout<<"..........................................."<<endl;
    
   }
 
 
};

class Singing : public virtual Sport
{
public:
    string s1 = "Nazrul Giti";
	string s2 = "Robindro Songit";
	string s3 = "Modern Songs";
   
     Singing()
    {
        cout << "\n\t\tDancing Constructor is Called\n"
             << endl;
    }
    ~Singing()
    {
        cout << "\n\t\tDancing Destructor is Called\n"
             << endl;
    }
	
	 void singing()
   {
   	
	
	cout<<"Name : "<<name[3] <<" Id :"<<id[4] <<endl ;
	cout<<"Sing : "<<s1 <<endl<<endl;
	
	cout<<"Name : "<<name[2] <<" Id :"<<id[2] <<endl;
	cout<<"Sing : "<<s2 <<endl<<endl;
	
	cout<<"Name : "<<name[1] <<" Id :" <<id[3] <<endl;
	cout<<"Sing : "<<s3 <<endl<<endl;
	
	cout<<"..........................................."<<endl;
    
   }
   
};

class Computer_Club :  public Singing, public Debate,public Dancing,public Student ,public Result,public Marks
{
public:

	  Computer_Club()
    {
        cout << "\n\t\tDancing Constructor is Called\n"
             << endl;
    }
    ~Computer_Club()
    {
        cout << "\n\t\tDancing Destructor is Called\n"
             << endl;
    }

  void display()
  {
  	cout<<"Coumutrt Club resurbed all information ,and club can add , remove or do anything with anyone\n";
  }

};
 int main()
 {
 	system("color 0A");
 	Student *Student1;
    Marks Obj1;
    Student1 = &Obj1;
    
     // Student1->information_box();
	   Student1->data();
	   Student1->display();	 
    Obj1.m();
	Obj1.makrs();
	
 	Result r;
 	r.result();
 	
 	Sport Obj2;
    Obj2.sports();
    
    
    Dancing d;
    d.dance();
   
    Debate db;
    db.debate();
    
    Singing S;
    S.singing();
   
    Computer_Club C;
    C.display();

   
}



	
	
	


