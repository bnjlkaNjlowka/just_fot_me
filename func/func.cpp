#include <iostream>
#include "func.h"
#include <math.h>

int math::algoritm_euklid(int num1,int num2) {
	if (num1 > num2) {
		while (num1 != 0 && num2 != 0) {
			while (num1 >= num2 && num2 != 0) {
				num1 = num1 - num2;
			}
			while (num2 >= num1 && num1 != 0) {
				num2 = num2 - num1;
			}
		}
	}
	else
		num1=math::algoritm_euklid(num2, num1);

	if (num1 == 0)
		return num2;
	else
		return num1;
}

bool math::num_is_prime(int num) {
	for (int i = 2; i <= int (sqrt(num) + 1); i++) {
		if (num % i == 0)
			return false;
	}
	return true;
}

