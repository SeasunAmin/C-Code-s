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
			name[1] = "Seasun";
			phn[1] = 1234567;
			
			id[2] = 102;
			name[2] = "Arif";
			phn[2] = 1234568;
			
			id[3] = 103;
			name[3] = "Fuad";
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
    string game_name;
    int score[3];
    int Total = 0, i;
    double AvgScore;
    int Result_Total[10];
  

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

    void get_score()
    {

        cout << "\n\n\tEnter the Sports Name: ";
        cin >> game_name;
        cout << "\n"<< endl;
        cout<<"\n\t<"<<game_name<<" Score Board>\n\n"<<endl;

        for (i = 0; i < 3; i++)
        {
            cout << "\n\tEnter The Score of Round " << i + 1 << ": ";
            cin >> score[i];
            Total = Total + score[i];
        }
        cout << "\n\n\tTotal Score "<<" : " << Total << endl;
        Result_Total[0]=Total;
    }

    inline void avg()  //Inline Function
    {
        AvgScore = (double)Total / 3.0;
        cout << "\n\n\tUsed Inline Function to Calculate Average\n\n"<< endl;
        cout << "\n\n\tOverall Average Score : " <<AvgScore <<"\n\n"<< endl;
    }

   
    void Sport_computer_club()
    {
        cout << "\n\n\tComputer Club has all features of Sport Class" << endl;
    }
};

class Dancing : public virtual Sport
{
public :

    string Dance_Name;
    int score[3];
    int Total = 0, i;
    double AvgScore;

    Dancing()
    {
        cout << "\n\t\tDancing Constructor is Called\n"<< endl;
    }
    ~Dancing()
    {
        cout << "\n\t\tDancing Destructor is Called\n"<< endl;
    }


//Static Function
   
    void get_dance_score()
    {
        cout << "\n\n\tEnter the Dance Style Name: ";
        cin >> Dance_Name;
        cout << "\n"<< endl;
        cout<<"\n\n\t<"<<Dance_Name<<" Competition Score Board>\n\n"<<endl;

        for (i = 0; i < 3; i++)
        {
            cout << "\n\tEnter The Score of Round " << i + 1 << ": ";
            cin >> score[i];
            Total = Total + score[i];
        }
        cout << "\n\n\tTotal Score : "<< Total << endl;
        Result_Total[1]=Total;
    }

    inline void avg_dance_score()  //Inline Function
    {
        AvgScore = (double)Total / 3.0;
        cout << "\n\n\n\tUsed Inline Function to Calculate Average"<< endl;
        cout << "\n\tOverall Average Score : "<<AvgScore <<"\n\n"<< endl;
    }

    void Dancing_computer_club()
    {
        cout << "\n\n\tComputer Club has all features of Dancing Class" << endl;
    }
};


class Debate : public virtual Sport
{
public:

    string date;
    int i;


    Debate()
    {
        cout << "\n\t\tDebate Constructor is Called\n"<< endl;
    }
    ~Debate()
    {
        cout << "\n\t\tDebate Destructor is Called\n"<< endl;
    }

    void get_debate_score()
    {
        cout << "\n\n\tEnter the Debate Date(DD/MM/YY): ";
        cin >> date;
        cout << "\n\n\n"<< endl;
        cout<<"\n\n\t<"<<date<<"     Competition Score Board>\n\n"<<endl;


        for (i = 0; i < 3; i++)
        {
            cout << "\n\tEnter The Score of Round " << i + 1 << ": ";
            cin >> score[i];
            Total = Total + score[i];
        }
        cout << "\n\n\tTotal Score : " << Total << endl;
        Result_Total[3]=Total;
    }

    inline void avg_debate_score()  //Inline Function
    {
        AvgScore = (double)Total / 3.0;
        cout << "\n\n\n\tUsed Inline Function to Calculate Average"<< endl;
        cout << "\n\tOverall Average Score : "<<AvgScore <<"\n\n"<< endl;
    }


    void Debate_computer_club()
    {
        cout << "\n\n\tComputer Club has all features of Debate Class" << endl;
    }
};

class Singing : public virtual Sport
{
public:
    string song_type;
    int i;

    //Static Function
    static void Song_Catagory()
    {
        string Catagory[5] = {"Bangla", "English", "Hindi", "Rabindra Sangeet", "Nazrul Geete"};
        int i;

        cout << "\n\n\tSong Category List\n"
             << endl;
        for (i = 0; i < 5; i++)
        {
            cout << "\n\tCategory " << i + 1 << ": " << Catagory[i];
        }
    }

    Singing()
    {
        cout << "\n\t\tSinging Constructor is Called\n"
             << endl;
    }
    ~Singing()
    {
        cout << "\n\t\tSinging Destructor is Called\n"
             << endl;
    }

    void get_singing_score()
    {
        cout << "\n\n\tEnter the Song Type: ";
        cin >> song_type;
        cout << "\n"<< endl;
        cout<<"\n\n\t<"<<song_type<<" Song Competition Score Board>\n\n"<<endl;

        for (i = 0; i < 3; i++)
        {
            cout << "\n\tEnter The Score of Round " << i + 1 << ": ";
            cin >> score[i];
            Total = Total + score[i];
        }
        cout << "\n\n\tTotal Score :"  << Total << endl;
        Result_Total[2]=Total;
    }

    inline void avg_singing_score()  //Inline Function
    {
        AvgScore = (double)Total / 3.0;
        cout << "\n\n\n\tUsed Inline Function to Calculate Average"<< endl;
        cout << "\n\tOverall Average Score : " <<AvgScore <<"\n\n"<< endl;
    }

    void Singing_computer_club()
    {
        cout << "\n\n\tComputer Club has all features of Singing Class" << endl;
    }
};

class Computer_Club : public Dancing, public Singing, public Debate
{
public:



    Computer_Club()
    {
        cout << "\n\t\tComputer_Club Constructor is Called\n"
             << endl;
    }
    ~Computer_Club()
    {
        cout << "\n\t\tComputer_Club Destructor is Called\n"
             << endl;
    }
    void display_computer_club()
    {
        
        cout<<"\n Computer club reserve all the right of this floowing club "<<endl;
    }
};
 int main()
 {
 	
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
    Obj2.get_score();
    Obj2.avg();
    
    Dancing d;
    //Static Functions
    cout<<"\n\t\t    Static Function"<<endl;
    
    d.get_dance_score();
    d.avg_dance_score();

	Debate db;
    db.get_debate_score();
    db.avg_debate_score();
    
    Singing s;
    s.get_singing_score();
    s.avg_singing_score();
    
    
 	
 	cout<<"\n\n\t\t    Using Object of Computer Club Class"<<endl;

    Computer_Club C;
    C.display_computer_club();
 	
 }



	
	
	


