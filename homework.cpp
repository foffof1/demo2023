#include <iostream>
#include <cmath>
int main()
{
	double a;
	std::cout << "input a\n";
	std::cin >> a;
	double b;
	std::cout << "input b\n";
	std::cin >> b;
	double c;
	std::cout << "input c\n";
	std::cin >> c;
	double D;
	double d;
	D =  b *b - 4 * a * c;
	d = sqrt(D);
	if (D < 0) {
		std::cout << "no answer";
	}
	else {
		if (D == 0) {
			double x;
			x = (-b + d) / (2 * a);
			std::cout << "x=";
			std::cout << x<<std::endl;
		}
		else {
			double x1, x2;
			x1 = (-b + d) / (2 * a);
			x2 = (-b - d) / (2 * a);
			std::cout << "x1=";
			std::cout << x1<<std::endl;
			std::cout << "x2=";
			std::cout << x2<<std::endl;
		}
	}
}

