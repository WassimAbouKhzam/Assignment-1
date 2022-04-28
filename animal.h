#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class Animal {
public:

	Animal(int, int);
	~Animal();
	
	virtual void print() {
		cout << "\nAnimal Print";
	}
	virtual void getOwner() = 0;

private:
	int name;
	int age;
};
#endif;
