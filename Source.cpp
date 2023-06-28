#include<iostream>
#include<string>

using namespace std;

class Customer
{
private:
	string Fname;
	string Lname;
	string Address;
	string UserName;

	int Password;
	int Lisence;
	int Age;
	int ContactNo;
public:
	Customer()
	{
		Fname = " ";
		Lname = " ";
		Address = " ";
		UserName = " ";

		Password = 0;
		Lisence = 0;
		Age = 0;
		ContactNo = 0;

	}

	void SetFname(string fname)
	{
		Fname = fname;
	}
	string GetFname()
	{
		return Fname;
	}

	void SetLname(string lname)
	{
		Lname = lname;
	}
	string GetLname()
	{
		return Lname;
	}

	void SetAddres(string adrs)
	{
		Address = adrs;
	}
	string GetAdress()
	{
		return Address;
	}

	void SetUserName(string User)
	{
		UserName = User;
	}
	string GetUserName()
	{
		return UserName;
	}

	void SetPassword(int pas)
	{
		Password = pas;
	}
	int GetPassword()
	{
		return Password;
	}

	void SetLisence(int Lis)
	{
		Lisence = Lis;
	}
	int GetLisence()
	{
		return Lisence;
	}

	void SetAge(int age)
	{
		Age = age;
	}
	int GetAge()
	{
		return Age;
	}
	
	void SetContactNo(int contact)
	{
		ContactNo = contact;
	}
	int GetContactNo()
	{
		return ContactNo;
	}

};


class Car{
private:
	string Brand;
	string CarName;
	int Model;
public:
	Car()
	{
		Brand = " ";
		CarName = " ";
		Model = 0;
	}

	void SetBrand(string brand)
	{
		Brand = brand;
	}
	string Getbrand()
	{
		return Brand;
	}

	void SetCarName(string name)
	{
		CarName = name;
	}
	string GetCarName()
	{
		return CarName;
	}

	void GetModel(int model)
	{
		Model = model;
	}
	int GetModel()
	{
		return Model;
	}
};

class Node{
private:
	Customer* nj;
};


int main()
{
	int Check;

	cout << "Welcome to Retal Car Management System" << endl;
	cout << "If you want to sign up press 1 and If you want to login press 2" << endl;
	cin >> Check;
	if (Check == 1)
	{
		int Check1;
		cout << "If you want to  sign up as a Customer press 1 or Admin press 2" << endl;
		cin >> Check1;
		if (Check1 == 1)
		{
			Customer C1;
			string fname, lname, adress, username;
			int pass, no, age, lis;
			cout << "Enter Your Frist name" << endl;
			cin >> fname;
			cout << "Enter Your Last name" << endl;
			cin >> lname;
			cout << "Enter Your Adress" << endl;
			cin >> adress;
			cout << "Enter Your Phone Number" << endl;
			cin >> no;
			cout << "Enter Your Age" << endl;
			cin >> age;
			cout << "Enter Your Lisence" << endl;
			cin >> lis;
			cout << "Create UserName" << endl;
			cin >> username;

		}
	}
	else if (Check == 2)
	{
		int Check2;
		cout << "If want to login as Customer press 1 or Admin press 2" << endl;
		cin >> Check2;
	}

	system("pause");

	return 0;
}