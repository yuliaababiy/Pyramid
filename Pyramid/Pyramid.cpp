#include "Pyramid.h"
using namespace std;

template <typename T>
Pyramid<T> :: Pyramid (int a, int b, int c, int d)
	: a(a), b(b), c(c), d(d){}


template<typename T>
void Pyramid<T>::displayIntoFile(ostream& out) {
	out << "A: " << a << " B: " << b << " C: " << c << " D: " << d << endl;
}

template<typename T>
void Pyramid<T>::display() {
	cout << "A: " << a << " B: " << b << " C: " << c << " D: " << d << endl;
}

template <typename T>
void Pyramid<T>::saveWithSpaces(ostream& out) {
	out << "Pyramid" << a << " " << b << " " << c << " " << d << endl;
}

template <typename T>
int Pyramid<T>::getA() {
	return a;
}

template <typename T>
int Pyramid<T>::getB() {
	return b;
}

template <typename T>
int Pyramid<T>::getC() {
	return c;
}

template <typename T>
int Pyramid<T>::getD() {
	return d;
}

template <typename T>
int Pyramid<T>::findS() {
	return a * b;
}

template <typename T>
int Pyramid<T>::findV() {
	return (findS() * h) / 3.0;
}


template class Pyramid<int>;
template class Pyramid<double>;