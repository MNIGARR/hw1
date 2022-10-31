#include <iostream>
using namespace std;


// Task 1:
//class Fraction {
//private:
//	int numerator;
//	int denominator;
//public:
//	void Init(int num, int denom) {
//		numerator = num;
//		denominator = denom > 0 ? denom : 1;
//	}
//	Fraction Multiply(const Fraction& f2) {
//		Fraction f3;
//		numerator = numerator * f2.numerator;
//		denominator = denominator * f2.denominator;
//		f3.Init(numerator, denominator);
//		return f3;
//	} // Kesri kesre vurub yeni kesr qaytarir
//	Fraction Add(const Fraction& f2) {
//		Fraction f3;
//		numerator = numerator * f2.denominator + f2.numerator * denominator;
//		denominator = denominator * f2.denominator;
//		f3.Init(numerator, denominator);
//		return f3;
//	} // Kesri kesrle toplayib yeni kesr qaytarir
//
//	Fraction Minus(const Fraction& f2) {
//		Fraction f3;
//		numerator = numerator * f2.denominator - f2.numerator * denominator;
//		denominator = denominator * f2.denominator;
//		f3.Init(numerator, denominator);
//		return f3;
//	} // Kesri kesrden chixib yeni kesr qaytarir
//
//	Fraction Divide(const Fraction& f2) {
//		Fraction f3;
//		numerator = numerator * f2.denominator;
//		denominator = denominator * f2.denominator;
//		f3.Init(numerator, denominator);
//		return f3;
//	} // Kesri kesre bolub yeni kesr qaytarir
//
//	void Simplify(Fraction& f2) {
//		int rem, temp, x = f2.numerator, y = f2.denominator;
//		if (x > y) {
//			temp = x;
//			x = y;
//			y = temp;
//		}
//		while ((rem = x % y) != 0) {
//			x = y;
//			y = rem;
//		}
//		f2.numerator /= y;
//		f2.denominator /= y;
//	} // Kesri ixtisar edir
//	void Print () {
//		cout << numerator << " / " << denominator << endl;
//	}
//};
//
//void main() {
//	Fraction f1;
//	f1.Init(4, 7);
//	Fraction f2;
//	f2.Init(4, 7);
//	Fraction result = f1.Multiply(f2);
//	result.Simplify(result);
//	result.Print();
//}


// Task 2:
//Point class yazilsin
//x, y fieldleri olsun ve her bir field uchun getter setterler yazilsin.
//constructor parametric, default
//Print method - u yazilsin

class Point {
	int x, y;
public:
	Point() {
		x = 0; y = 0;
	}
	Point(int argX, int argY) {
		SetX(argX);
		SetY(argY);
	}

	int GetX() {
		return x;
	}
	int GetY() {
		return y;
	}

	void SetX(int argX) {
		x = argX;
	}
	void SetY(int argY) {
		y = argY;

	}

	void Print() {
		cout << "X: " << x << "\nY: " << y << endl;
	}
};
