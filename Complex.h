#pragma once
class Complex
{
private:
	double re;
	double img;
public:
	//constructeur//
	Complex(double r, double i);
	Complex(const Complex& c);
	//operateur arithmetique //
	Complex operator +(Complex c)const;
	Complex operator + (double a)const;
	Complex operator -(Complex c)const;
	Complex operator *(Complex c)const;
	Complex operator /(Complex c)const;
	//operateur logique//
	bool operator==(Complex c)const;
	bool operator!=(Complex c)const;
	bool operator<(Complex c)const;
	bool operator>(Complex c)const;

	void afficher() const;
	⁓Complex();

};

