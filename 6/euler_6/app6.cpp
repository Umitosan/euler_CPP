// Sum square difference
// Problem 6
//
// The sum of the squares of the first ten natural numbers is,
// 1^2 + 2^2 + ... + 10^2 = 385
//
// The square of the sum of the first ten natural numbers is,
// (1 + 2 + ... + 10)^2 = 55^2 = 3025
//
// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
//
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.


#include <iostream>


int main() {

	unsigned long long sum_of_squares = 0LL;
	unsigned long long difference = 0LL;
	unsigned long long square_of_sum = 0LL;

	unsigned int TOP = 100;
	unsigned int tSum = 0;

	for (size_t i = 1; i < (TOP+1); i++)
	{
		sum_of_squares += (i*i);
		tSum += i;
	}

	square_of_sum = (tSum * tSum);
	
	std::cout << "\n sum_of_squares 1-" << TOP << " = " << sum_of_squares << std::endl;
	std::cout << "\n square_of_sum 1-" << TOP << " = " << square_of_sum << std::endl;
	std::cout << "\n sum_of_squares - sum_of_squares = " << ( square_of_sum - sum_of_squares ) << std::endl;


	std::cin.get();
	return 0;
}


// ANSWER: 25164150





