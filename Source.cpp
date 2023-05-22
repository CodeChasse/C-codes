#include<iostream>
#include<deque>
using namespace std;

int main()
{
	deque<int>s;
	for (int i = 0; i < 5; i++)
	{
		s.push_front(i);
	}

	cout <<  "size = " << s.size()<<endl;
	cout << "front = " << s.front() << endl;
	cout << "back = " << s.back() << endl;
	s.pop_front();
	s.pop_back();
	cout << "size = " << s.size()<<endl;
	s.push_front(6);
	s.push_back(7);
	cout << std::boolalpha << s.empty()<<endl;
	//s.emplace();
	cout << "size = " << s.size()<<endl;;;
	
	



	system("pause");
	return 0;
}