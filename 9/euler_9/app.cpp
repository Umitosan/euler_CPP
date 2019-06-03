/*
Special Pythagorean triplet
Problem 9

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
	a^2 + b^2 = c^2

	For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

	There exists exactly one Pythagorean triplet for which a + b + c = 1000.
	Find the product abc.
*/

#include <iostream>
#include <math.h>


int main() {

	for (size_t c = 1; c < 1000; c++)
	{
		for (size_t b = 1; b < 1000; b++)
		{
			for (size_t a = 1; a < 1000; a++)
			{
				if ( ((a + b + c) == 1000) && (a < b) && (b < c) && (pow(a,2) + pow(b, 2) == pow(c, 2)) ) {
					std::cout << 
						a << " + " <<
			            b << " + " <<
			            c << " = " <<
			            (a+b+c) << 
					std::endl;
					std::cout << "Product:  a * b * c = " << (a*b*c) << std::endl;
				}
			}
		}
	}


	std::cin.get();
	return 0;
}

// 200 + 375 + 425 = 1000

// 200 * 375 * 425 = 
// ANSWER = 31875000