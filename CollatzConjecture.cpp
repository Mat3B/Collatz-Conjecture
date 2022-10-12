// Mathew Breland - Program for 3n + 1 mathematical equation
#include <iostream>
using namespace std;

// function declaration
int collatz(int n);


int main() {

	int n;

	cout << "Enter a number that is greater than 0: ";
	cin >> n;

	// this will loop entirely while n is not equal to 1
	while (n != 1) {

		cout << n << endl;

		// calls the function with variable n
		n = collatz(n);

	}

	// if n is 1 this will output n
	cout << n << endl;

	return 0;
}

int collatz(int n) {

	// if remainder of n/2 is 0 (if n is even),  return n/2
	if (n % 2 == 0) {
		return n / 2;
	}

	// else (if n is odd) return 3*n+1
	else {
		return 3 * n + 1;
	}
}