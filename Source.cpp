#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int>s;
	for (int i = 0; i < 5; i++)
	{
		s.push(i);
	}

	cout <<  "size = " << s.size();
	cout << "top = " << s.top();

	s.pop();
	cout << "size = " << s.size();
	s.push(6);
	s.push(7);

	cout<<"size = "<<s.size();





	system("pause");
	return 0;
}