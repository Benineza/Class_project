#include <iostream>
using namespace std;
class Animal
{
	public:
	virtual void makeSound()
	{
		cout<<"Animal make sound";
	}
};
class Dog:public Animal
{
	public:
		virtual void makeSound()
		{
			cout<<"Dog wauw wauw"<<endl;
		}
};
class Cat:public Animal
{
	public:
		virtual void makeSound()
		{
			cout<<"Cat meows";
		}
};
int main()
{
Dog dog;
dog.makeSound();
Cat cat;
cat.makeSound();
}

