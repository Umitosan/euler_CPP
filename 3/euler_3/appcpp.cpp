//Largest prime factor
//Problem 3
//
//The prime factors of 13195 are 5, 7, 13 and 29.
//
//What is the largest prime factor of the number 600851475143 ?


#include <iostream>
#include <string>


double isPrime(double numToCheck) {
	double foundPrime = 0;
	if (fmod(numToCheck, 2) == 0) {  // check 2
		foundPrime = 2;
	}
	else { // check primes 3 and up
		for (double counter = 3; counter < numToCheck; counter += 2) {
			if (fmod(numToCheck, counter) == 0) {
				std::cout << "found prime factor: " << counter << std::endl;
				foundPrime = counter;
				return foundPrime; // exit as soon as first prime factor is found
			}
		}
	}
	return foundPrime;
}


int main() {

	const double TOP = 600851475143;
	const double testTop = 1033121304;  // 13195 or 1033121304
	double largestPrimeFound;
	double foundPrimeFactors[30] = {};  //cout << "elements in array: " << sizeof(foundPrimeFactors) / sizeof(int) << endl;

	double workingNum = TOP; // current number remainder of TOP to be checked for prime factors
	
	std::string isPrimeAnswer;

	bool doneLooking = false;
	while (doneLooking == false) {
		double found = isPrime(workingNum);
		if ( (found != 0) || (found != 0) ) { // yes it found a factor, add it to the list
			for (size_t i = 0; i < ( sizeof(foundPrimeFactors) / sizeof(double) ); i++) {
				if (foundPrimeFactors[i] == 0) { // found empty spot
					foundPrimeFactors[i] = found;
					workingNum = workingNum / found; // reduce workingNum by found prime factor, then continue looking for new factors
					break;
				}
			}
		}
		else { // didn't find a factor, done looking, add current remainder to found prime factors
			for (size_t i = 0; i < (sizeof(foundPrimeFactors) / sizeof(double)); i++) {
				if (foundPrimeFactors[i] == 0) { // found empty spot
					foundPrimeFactors[i] = workingNum;
					std::cout << "found prime factor: " << workingNum << " (largest)" << std::endl; // workingNum is prime factor at this point
					largestPrimeFound = workingNum;
					break;
				}
			}
			doneLooking = true;
		}
	}

	// print found factors array
	//std::cout << "\n";
	//for (int i = 0; i < (sizeof(foundPrimeFactors) / sizeof(double)); i++) {
	//	std::cout << "foundPrimeFactors[" << i << "] = " << foundPrimeFactors[i] << std::endl;
	//}

	std::cout << "\n" << "Largest found prime factor of " << TOP << " : " << "\n" << largestPrimeFound << std::endl;

	std::cin.get();
	return 0;
}

// answer: 6857