#include <iostream>
using namespace std;
class Base_class_1
{
public:
void show_1()
{
cout<<" Hello i am from first base class"<<endl;
}
};
class Base_class_2
{
public:
void show_2()
{
cout<<" Hello i am from second base class"<<endl;
}
};
class derived_class: public Base_class_1,public Base_class_2
{
public:
void show_3()
{
cout<<" Hello i am from the derived class"<< endl;
}
};
int main()
{
derived_class d;
d.show_1();
d.show_2();
d.show_3();
}
