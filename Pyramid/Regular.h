#ifndef REGULAR
#define REGULAR
#include "Pyramid.h"
#include <iostream>
using namespace std;

template <typename T>
class Regular : public Pyramid<T>
{
protected:
	int sideSquare;
	
public:
	Regular(int a, int b, int c, int d, int sideSquare);
	 void displayIntoFile(ostream& out) override;
	 void display() override;
	 void saveWithSpaces(ostream& out) override;
	int getSideSquare();
	double findApoferm();
};
#endif 


