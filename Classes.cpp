#include <iostream>
using namespace std;

class Car
{
	public:
	string brand;
	string model;
	int year;
	Car()
	{
	string B=brand;
	string M=model;
	int Y=year;
	}
	void displayInfo()
	{
		cout<<"The car brand:"<<brand<<endl;
		cout<<"The car model:"<<model<<endl;
		cout<<"The year:"<<year;
	}
};

int main()
{
Car car1;
car1.brand="toyota";
car1.model="carina";
car1.year=1867;
car1.displayInfo();//going to display information of the cars

}

