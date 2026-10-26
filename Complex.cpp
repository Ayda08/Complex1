#include "Complex.h"
#include <iostream>
using namespace std;
 
Complex::Complex(double r, double i){
	this->re = r;
	this->img = i;
}

Complex::Complex(const Complex& c){
	this->re = c.re;
	this->img = c.img;
}

Complex Complex::operator+(Complex c) const{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re + c.re;
	res->img = this->img + c.img;
	return *res;
}

Complex Complex::operator+(double a) const{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re + a;
	res->img = this->img + 0;

	return *res;
}

Complex Complex::operator-(Complex c) const{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re - c.re;
	res->img = this->img - c.img;
    return *res;
}

Complex Complex::operator*(Complex c) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re * c.re - this->img * c.img;
	res->img = this->img * c.re + this->re * c.img;
	return *res;
}

Complex Complex::operator/(Complex c) const
{
	double denom = this->re * c.re + this->img * c.img;
	if (denom == 0)
		return Complex(0.0,0.0);
	Complex* res = new Complex(0.0, 0.0);
	res->re = (this->re * c.re + this->img * c.img)/denom;
	res->img = (this->img * c.re + this->re * c.img)/denom;
	return *res;
}

bool Complex::operator==(Complex c) const
{
	if (this->re == c.re && this->img == c.img) {
		return true;
	}else{
	return false;
}
bool Complex::operator !=(Complex c)const{
	if (this->re != c.re ||this->img != c.img) {
		return true;
	}else{
	return false;
}

	bool Complex::operator<(Complex c) const {
		if (this->re * this->re + this->img * this->img < c.re * c.re + c.img * c.img) { 
			return true;
		}else{
            return false;
}

bool Complex::operator>(Complex c) const
{
	if (this->re * this->re + this->img * this->img > c.re * c.re + c.img * c.img) {
		return true;
	}
	else {
		return false
}
void Complex::afficher() const {
		cout << this->re << "+" << this->img << "i" << endl; // Addition
		cout << this->re << "-" << this->img << "i" << endl; // Soustraction

		cout << this->re * c.re - this->img * c.img << "+"
			<< this->re * c.img + this->img * c.re << "i" << endl; // Multiplication

		cout << (this->re * c.re + this->img * c.img) /
			(c.re * c.re + c.img * c.img) << endl; // Division

		cout << (*this == c) << endl; // Egalite
		cout << (*this != c) << endl; // Different
		cout << (*this > c) << endl;  // Superieur
		cout << (*this < c) << endl;  // Inferieur
}


Complex::⁓Complex() {
}


