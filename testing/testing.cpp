#include <iostream>
using namespace std;

class bird {
private:
	int height;
	void flapwings();
public:
	void fly();
	void reset();
	int width;


	void bird::flapwings() {
		height += rand() % 100;
	}

	void bird::reset() {
		height = 0;
	}

	void bird::fly() {
		flapwings();
	}
};



int main() {

	bird FlockOfSparrows[1024];		
	
	for (int i = 0; i < 1024; i++)
		FlockOfSparrows[i].reset();

	for (int i = 0; i < 1024; i++)
		FlockOfSparrows[i].fly();

	std::cout << "Hello" << std::endl;

	std::cout << FlockOfSparrows[1024].height << std::endl;
	FlockOfSparrows[1024].width;

	return 0;


}

