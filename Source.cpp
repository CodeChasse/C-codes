#include<iostream>
#include<string>

using namespace std;

int main()
{
	
	
	string fname;
	string lname;
	string uname;
	int age;
	int pasword;

	cout << "Enter Frist Name" << endl;
	cin >> fname;
	cout << "Enter Last Name" << endl;
	cin >> lname;
	cout << "Enter User Name" << endl;
	cin >> uname;

	cout << "Create Pasword " << endl; 
	cin >> pasword;
	cout << "Account created sucessfully" << endl;
	string temp;
	int temp1;
	cout << "Enter User Name" << endl;
	cin >> temp;
	cout << "Enter Password" << endl;
	
	cin >> temp1;

	if (uname==temp&&pasword==temp1)
	{
		cout << "Sucesfully login";

	}
	else
	{
		cerr << "Wrong Password and Username";
	}


	

	system("pause");
	return 0;
}