#include <iostream>
using namespace std;
#include "animal.h"

Animal::Animal(int n, int a) {
	cout << "\nAnimal Created";
	name = n;
	age = a;
}

Animal::~Animal() {
	cout << "\nAnimal Destroyed";
}
