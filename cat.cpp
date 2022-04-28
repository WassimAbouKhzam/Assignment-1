#include <iostream>
using namespace std;
#include "cat.h"

Cat::Cat(int n, int a, int c, int pSize) :Animal(n, a) {
	cout << "\nCat Created";
	color = c;
	pawSize = pSize;
}

Cat::~Cat() {
	cout << "\nCat Destroyed";
}
