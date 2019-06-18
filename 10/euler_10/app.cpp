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
	// more info on why we only need to check to sqrt(number): https://stackoverflow.com/questions/5811151/why-do-we-check-up-to-the-square-root-of-a-prime-number-to-determine-if-it-is-pr
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
			bigSum += checkNum;
			primeCounter += 1;
		}
		checkNum += 2;
	}

	std::cout << "\n";
	std::cout << "bigSum: " << bigSum << std::endl;

	std::cin.get(); // just to pause
	return 0;
}

// ANSWER: 142913828922
