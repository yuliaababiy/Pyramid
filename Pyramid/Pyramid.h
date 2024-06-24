#ifndef PYRAMID
#define PYRAMID
#include <iostream>
using namespace std;

template <typename T>
class Pyramid
{
protected:
	int a;
	int b;
	int c;
	int d;
	int h;
public:
	Pyramid(int a, int b, int c, int d);
	virtual void displayIntoFile(ostream& out);
	virtual void display();
	virtual void saveWithSpaces(ostream& out);
	int getA();
	int getB();
	int getC();
	int getD();
	int getH();
	int findS();
	int findV();
};
#endif // !PYRAMID

