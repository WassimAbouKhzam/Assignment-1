#ifndef DOG_H
#define DOG_H
#include <iostream>
using namespace std;
#include "animal.h"

class Dog :public Animal {
public:

	Dog(int, int, int);
	~Dog();

	 void print() {
		cout << "\nDog Print";
		Animal::print();
	}
	 virtual void getOwner() {
		 cout << "\nOwner: Dog.";
	 }

private:
	int breed;
};
#endif
