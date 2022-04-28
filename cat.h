#ifndef CAT_H
#define CAT_H
#include <iostream>
#include "animal.h"
using namespace std;

class Cat :public Animal {
public:

	Cat(int, int, int, int);
	~Cat();
	
	void print() {
		cout << "\nCat Print";
		Animal::print();
	}
	virtual void getOwner() {
		cout << "\nOwner: Cat.";
	}

private:
	int color;
	int pawSize;
};
#endif
© 2022 GitHub, Inc.
Terms
Privac
