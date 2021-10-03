#include<iostream>
#include<conio.h>
using namespace std;
class mobile
{
	public :
		void call()
		{
			cout << " Hello..!" <<endl;
		}
		virtual void sms() = 0;
};

class abul : public mobile
{
	public :
		void sms ()
		{
			cout << " Hi ,This is Abul " <<endl;
		}
		
};
class habul : public mobile
{
	public :
		void sms ()
		{
			cout << " Hi ,This is Habul " <<endl;
		}
		
};
int main()
{
	mobile *m;
	abul a;
	habul h;

	m = &a;
	m->call();
	m->sms();
	
	m = &h;
	m->sms();
	
	getch();
}










