#include <iostream>
#include "func.h"

int math::algoritm_euklid(int num1,int num2) {
	if (num1 > num2) {
		while (num1 !=0 && num2 !=0) {
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
