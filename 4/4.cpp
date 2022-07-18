#include <iostream>
#include "../func/func.h"

int main() {
	int num;
	std::cout << "Введите число:";
	std::cin >> num;
	std::cout << std::endl;

	for (int i = num - 1; i < num; i--) {
		if (math::num_is_prime(i)) {
			std::cout << "Наибольшее простое число меньше заданного:" << i << std::endl;
			return 0;
		}
	}
}
