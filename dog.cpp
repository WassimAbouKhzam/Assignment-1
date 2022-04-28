#include <iostream>
using namespace std;
#include "dog.h"

Dog::Dog(int n , int a , int b) :Animal(n, a) {
	cout << "\nDog Created";
	breed = b;
}

Dog::~Dog() {
	cout << "\nDog Destroyed";
}
