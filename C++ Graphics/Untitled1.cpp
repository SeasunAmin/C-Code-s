#include<graphics.h>
using namespace std;
int main()
{
	
	initwindow(500,400,"Image window");
	readimagefile("SS.jpg",0,0,400,300);
	
	
	getch();
}
