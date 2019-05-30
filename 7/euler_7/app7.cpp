/*
	10001st prime
	Problem 7

	By listing the first six prime numbers : 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

	What is the 10,001st prime number ?
*/

#include <iostream>

bool isPrime(int numToCheck) {
	bool ans = false;
	for (int counter = 3; counter < (numToCheck); counter += 2) {
		if (numToCheck % counter == 0)  {
			bool ans = false;
			break;
		}
		else if ( (numToCheck % counter != 0) && (counter == (numToCheck-2)) ) {
			ans = true;
			break;
		}
		else {
			// keep checking
		}
	}
	return ans;
}



int main() {

	int primeCounter = 3;  // start at #4 because we skip 1-3

	int TOP = 200000;
	size_t checkNum = 3;

	while (primeCounter < (10001+1)) {
		if (isPrime(checkNum)) {
			std::cout << "-- #" << primeCounter << " --> " << checkNum << " is PRIME!" << std::endl;
			primeCounter += 1;
			//std::system("pause");
		}
		checkNum += 2;
	}

	std::cout << "\n" << std::endl;
	std::system("pause");
	return 0;
}

// ANSWER: 104743