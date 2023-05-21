#include<iostream>
using namespace std;


void display( int n)
{
	if (n < 1)
	{
		return;
	}
	else
	{
		cout << n << endl;
		display(n - 1);
		cout << n << endl;
	}
}
int main()
{

	display(5);

	system("pause");
	return 0;
}