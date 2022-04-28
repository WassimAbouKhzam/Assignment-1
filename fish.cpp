#include <iostream>
using namespace std;
#include "fish.h"

Fish::Fish(int n, int a, int gCapacity, int sSpeed) :Animal(n, a) {
	cout << "\nFish Created";
	gillCapacity = gCapacity;
	swimSpeed = sSpeed;
}

Fish::~Fish() {
	cout << "\nFish Destroyed";
}
