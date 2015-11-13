#include <iostream>
using namespace std;

class Bird{

private:
	int height;
	void flapwings();

public:
	void fly();
	void reset();

};

void Bird::flapwings() {
	height = rand() % 100;
}

void Bird::fly() {
	flapwings();
}

void Bird::reset() {
	height = 0;
}

int main() {
	Bird sparrow;
	sparrow.reset();
	sparrow.fly();

	return 0;
}