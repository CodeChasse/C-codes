#include<iostream>
#include<string>

using namespace std;

class user
{
	string uname;
	int password;
public:
	user()
	{
		uname = "default";
		password = NULL;
	}
	user(string data ,int dataa )
	{
		uname = data;
		password = dataa;
	}

	void setUname(string name)
	{
		uname = name;
	}
	void setpasword(int pass)
	{
		password = pass;
	}

	void login()
	{
		string temp;
		int temp1;
		cout << "Enter Username" << endl;
		cin >> temp;
		cout << "Enter Password" << endl;
		cin >> temp1;
		if (temp == uname&&password == temp1)
		{
			cout << "login Sucessfully";
		}
		else
			cerr << "Wrong pass or Username";
	}

};
int main()
{
	string Uname;
	string fname;
	string lname;
	int pasword;

	cout << "Enter Your Frist Name" << endl;
	cin >> fname;
	cout << "Enter Your Last Name" << endl;
	cin >> lname;
	cout << "Create UserName" << endl;
	cin >> Uname;
	cout << "Create Pasword" << endl;
	cin >> pasword;

	user u;
	u.setUname(Uname);
	u.setpasword(pasword);

	u.login();


	system("pause");
	return 0;
}