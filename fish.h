#ifndef FISH_H
#define FISH_H
#include <iostream>
#include "animal.h"
using namespace std;

class Fish :public Animal {
public:

	Fish(int, int, int, int);
	~Fish();

	virtual void getOwner() {
		cout << "\nOwner: Fish.";
	}

private:
	int gillCapacity;
	int swimSpeed;
};
#endif
