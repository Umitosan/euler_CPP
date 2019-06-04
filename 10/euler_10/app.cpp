/*
	The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

	Find the sum of all the primes below two million.
*/


#include <iostream>
#include <math.h>



static bool isPrime(int number)
{
	//if (number < 2) return false;
	//if (number % 2 == 0) return (number == 2);
	double root = sqrt(number);
	for (int i = 3; i <= root; i += 2)
	{
		if (number % i == 0) return false;
	}
	return true;
}


int main() {

	int primeCounter = 3;  // start at #4 because we skip 1-3
	unsigned int checkNum = 3; // current number to check if prime
	long long bigSum = 2LL; // start with 2 because it's the first prime and not checked

	while (checkNum < 2000000) {
		if (isPrime(checkNum)) {
			//std::cout << "-- #" << primeCounter << " --> " << checkNum << " is PRIME!" << std::endl;
			bigSum += checkNum;
			//std::cout << "bigSum = " << bigSum << std::endl;
			primeCounter += 1;
		}
		checkNum += 2;
	}

	std::cout << "\n";
	std::cout << "bigSum: " << bigSum << std::endl;

	std::cin.get();
	return 0;
}

// ANSWER: 142913828922
