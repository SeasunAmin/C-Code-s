#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
class A
{
  private :
  int id =20011;
  string name = "seasun";	
	
	public :
		friend class B;

};
class B
{
	public :
		void display(A ob)
		
		{
		cout<<ob.id <<endl;
		cout <<ob.name <<endl;	
		}
  	
};
int main()
{
	
	A ob1;
	B ob2;
	ob2.display( ob1);
	
	
	getch();
}
