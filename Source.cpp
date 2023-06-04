#include <iostream>
using namespace std;
class Car
{
private:
	int speed;
	char* name;
	bool isOn;
public:
	Car();
	void setName(char*);
	char* getName();

	void accelerate();
	void brake();
	int getSpeed();

	void start();
	void stop();
	bool getIgnition();

	void display();
};
Car::Car()
{
	cout << "Car Constructor is called" << endl;
	speed = 0;
	name = "";
	isOn = false;
}
void Car::setName(char* n)
{
	name = n;
}
void Car::display()
{
	cout << "Car Object" << endl;
	cout << "Name: " << name << endl;
	cout << "Speed: " << speed << endl;
	cout << "isOn: " << isOn << endl;
}
void Car::accelerate()
{
	if (speed<100)
	{
		speed += 5;
	}
}
void Car::brake()
{
	if (speed != 0)
	{
		speed -= 5;
	}
}
int main()
{
	Car c1;
	c1.display();
	c1.setName("Honda");
	for (int i = 1; i < 100; i++)
	{
		c1.accelerate();
	}
	c1.display();
	for (int i = 1; i <= 25; i++)
	{
		c1.brake();
	}
	c1.display();

	return 0;
}
