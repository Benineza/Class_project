#include <iostream>
using namespace std;
class Car 
{
	private:
	string brand;
	string model;
	public:
	int year;
Car(string b,string m, int y)
{
brand=b;
model=m;
year=y;
}
Car(string b, string m)
{
brand=b;
model=m;
year=0;
}
void displayInfo()
{
	cout<<"Car Brand:"<<brand<<endl;
	cout<<"Car model:"<<model<<endl;
	cout<<"Year:"<<year<<endl;
}
public:
void setBrand(string b)
{
brand=b;
}
void setModel(string m )
{
model=m;
}
string getBrand()
{
return brand;
}
string getModel()
{
return model;
}
};
int main()
{
Car car1("toyota","carina",1765); //asking for parameter 
car1.displayInfo();
Car car2("BMW","x5");
car2.displayInfo();

}
