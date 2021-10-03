#include<iostream>
#include<fstream>
#include <string>
using namespace std;
bool IsloggedIn()
{
	string username, password,un,pw;
	
	cout << "Enter Username = ";
	cin >> username;
	cout << "Enter Password = ";
	cin >>password;
	
	ifstream file("seasun.txt" );
	getline(file,un);
	getline(file,pw);
	if (un == username && pw == password)
	{
		return true;
	}
	else
	{
		return false;
	}
	int main()
	{

		int choise;
		cout <<" 1.Registration \n 2.Login \n";
		cin >> choise;
		if (choise == 1)
		{
			string username, password;

			cout << "Enter Username";
			cin >> username;
			cout << "Enter Password";
			cin >> password;
			
			ofstream file;
			file.open("seasun.txt")
				file << username << endl << password;
			file.close();
		}
		else if (choise == 2)
		{
			bool status = IsloggedIn;
			if (!status)
			{
				cout << "Login Failed";
				system("pause");
				return 0;

			}
			else
			{
				cout << "Login Successful";
				system("pause"); 
				return 0;
			}
			
		}
		

	}




		
}
