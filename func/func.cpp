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
	for (int i = 2; i < int (sqrt(num) + 1); i++) {
		if (num % i == 0)
			return false;
	}
	return true;
}

int math::sum_delitelei_num(int num) {
	int temp_num, sum = 0;
	for (int i = 2; i < int (sqrt(num)+1); i++) {
		temp_num = num % i;
		if (temp_num == 0)
			sum = sum + i + (num / i);
			
	}
	if (int (sqrt(num)) * int (sqrt(num)) == num)
		return sum + 1 - sqrt(num);
	else
		return sum + 1;
}
