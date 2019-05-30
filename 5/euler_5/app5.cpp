//Smallest multiple
//Problem 5
//
//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?


#include <iostream>

int main() {
	
	unsigned long long int tryNum = 2;
	unsigned long long int multipleFound = 0;

	while (multipleFound == 0) {
		bool divisibleByList = false;
		for (int i = 1; i < 21; i++) {
			if (std::fmod(tryNum, i) == 0) {
				if (i == 20) {
					divisibleByList = true;
					break;
				}
			}
			else {
				break;
			}
		}
		if (divisibleByList == true) {
			multipleFound = tryNum;
			break;
		}
		else {
			divisibleByList = 0;
			tryNum += 1;
		}

	}

	std::cout << "first common multiple of 1 - 20 = \n" << " = " << multipleFound << "\n" << std::endl;
	for (int i = 20; i > 0; i--)
	{
		std::cout << multipleFound << " % " << i << " = " << (multipleFound % i) << " \n";
	}	

	
	std::cin.get();
	return 0;
}

// ANSWER:  232792560
