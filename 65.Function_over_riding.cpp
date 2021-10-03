#include<iostream>
#include<conio.h>
using namespace std;

class person
{
	public :
		void display()
		{
			cout << "I am a pagol...!"<<endl;
		}
};
class student : public person
{
	public :
		void display()
		{
			cout << "I am a chagol...!"<<endl;
		}
};
class faki : public person
{
	public :
		void display()
		{
			cout << "I am a bolod...!"<<endl;
		}
};int main()
{
	person p;
	p.display();
	
	student s;
	s.display();
	
	faki f;
	f.display();
	
	
	
}

