#include<iostream>
#include<conio.h>
using namespace std;

class robot
{
	public :
	virtual	void display()
		{
			cout << "I am a robot...!"<<endl;
		}
};
class human : public robot
{
	public :
		void display()
		{
			cout << "I am a human...!"<<endl;
		}
};
class null : public robot
{
	public :
		void display()
		{
			cout << "I am nothing...!"<<endl;
		}
};int main()
{
	robot *r;
	human h;
	null n;
	
	r =&h;
	r -> display();
	
	r =&n;
	r -> display();
	
}

