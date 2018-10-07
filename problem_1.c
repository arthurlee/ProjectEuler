/*
	https://projecteuler.net/problem=1

	Multiples of 3 and 5

	If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
	The sum of these multiples is 23.

	Find the sum of all the multiples of 3 or 5 below 1000.

	-----------------------------------------------------------------

	Answer:  233168

 */

 #include <stdio.h>

int main() {

	int max_num = 1000, i, total = 0;

	// first add all multiples of 3
	for (i = 3; i < max_num; i += 3) {
		total += i;
	}

	// last add all multiples of 5 excluding multiples of 3
	for (i = 5; i < max_num; i += 5) {
		if ((i % 3) != 0) {
			total += i;
		}
	}

	printf("total = %d\n", total);
	return 0;
}

