//Multiples of 3 and 5
//Problem 1
//
//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//
//Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>
#include <array>

using namespace std;

int main() {
	
	unsigned int sum = 0;
	//array<int, 1000> multArr;

	for (int i = 1; i < 1000; i++) {
		if ((i % 3 == 0) || (i % 5 == 0)) {
			//multArr[i] = i;
			sum += i;
		}
	}

	//cout << multArr.size() << endl;
	
	cout << "sum of all the multiples of 3 or 5 below 1000 = " << endl;
	cout << sum << endl;

	cin.get();
	return 0;
}

// answer: 233168