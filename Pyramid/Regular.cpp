#include "Pyramid.h"
#include "Regular.h"
#include <cmath>
using namespace std;

template <typename T>
Regular<T> :: Regular(int a, int b, int c, int d, int sideSquare)
	: Pyramid<T>(a, b, c, d), sideSquare(sideSquare){}


template<typename T>
void Regular<T>::displayIntoFile(ostream& out) {
	out << "A: " << this->a << " B: " << this->b << " C: " << this->c << " D: " << this->d << " SideSquare: " << this->sideSquare << endl;
}

template<typename T>
void Regular<T>::display() {
	cout << "A: " << this->a << " B: " << this->b << " C: " << this->c << " D: " << this->d << " SideSquare: " << this->sideSquare << endl;
}

template <typename T>
void Regular<T>::saveWithSpaces(ostream& out) {
	out << "Pyramid" << this->a << " " << this->b << " " << this->c << " " << this->d << " " << this->sideSquare << endl;
}

template <typename T>
int Regular<T>::getSideSquare() {
	return sideSquare;
}

template <typename T>
double Regular<T>::findApoferm() {
	double halfBase = this->sideSquare / 2.0;
	return sqrt(halfBase * halfBase + this->getH() * this->getH());
}


template class Regular<int>;
template class Regular<double>;