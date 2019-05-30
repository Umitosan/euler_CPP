//Largest palindrome product
//Problem 4
//
//A palindromic number reads the same both ways.The largest palindrome made from the product of two 2 - digit numbers is 9009 = 91 × 99.
//
//Find the largest palindrome made from the product of two 3 - digit numbers.


#include <iostream>
#include <string>
#include <cstdlib>


bool isPal(int num1, int num2) {
	bool ans = false;

	int product = num1 * num2;
	int productRev = 0;

	std::string productStr = std::to_string(product);
	std::string productStrRev = "";

	for (int i = 0; i < productStr.size()+1; i++) // skip over the null terminator
	{
		if (i != 0) { // skip over the null terminator
			productStrRev = productStrRev + productStr[productStr.size() - i];
		}
	}

	// unsigned long stoul (const string&  str, size_t* idx = 0, int base = 10);
	productRev = std::stoul(productStrRev, nullptr, 10);

	if (product == productRev) {
		ans = true;
	}
	else {
		ans = false;
	}

	return ans;
}

int main() {
	int num1 = 999;
	int num2 = 999;

	double foundPal = 111; // smallest 3 diget pal to start
	int prodNum1 = 0;
	int prodNum2 = 0;


	for (int i = num1; i > 99; i--)
	{
		for (int j = num2; j > 99; j--)
		{
			if (isPal(i, j)) {
				double prod = i * j;
				std::cout << "found a palendrome product for [" << j << "," << j << "] = " << prod << std::endl;
				if (prod > foundPal) {  // found a new larger palendrome
					foundPal = prod;
					prodNum1 = i;
					prodNum2 = j;
					std::cout << "NEW high palendrome = " << foundPal << std::endl;
				}
			}
			else {
				// nope
			}
		}
	}

	std::cout << "\n The highest palendrome number found was the product of: " << std::endl;
	std::cout << "[" << prodNum1 << " * " << prodNum2 << "]" << std::endl;
	std::cout << "Palendrome product = " << foundPal << std::endl;

	std::cin.get(); // pause
	return 0;
}

// product of 993 * 913 = 
// ANSWER: 906609