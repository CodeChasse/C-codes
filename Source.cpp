#include<iostream>
#include<queue>
using namespace std;

int main()
{
	queue<int>s;
	for (int i = 0; i < 5; i++)
	{
		s.push(i);
	}

	cout <<  "size = " << s.size()<<endl;
	cout << "front = " << s.front() << endl;
	cout << "back = " << s.back() << endl;
	s.pop();
	s.pop();
	cout << "size = " << s.size()<<endl;
	s.push(6);
	s.push(7);
	cout << std::boolalpha << s.empty()<<endl;
	//s.emplace();
	cout << "size = " << s.size()<<endl;;;
	
	



	system("pause");
	return 0;
}