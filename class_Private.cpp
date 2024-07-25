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
void displayInfo()
{
	cout<<"Car Brand:"<<brand<<endl;
	cout<<"Car model:"<<model<<endl;
	cout<<"Year:"<<year;
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
Car car1("toyota","carina",0); //asking for parameter 
car1.setBrand("toyota");
car1.setModel("carina");
car1.year=1765;
car1.displayInfo();


}
