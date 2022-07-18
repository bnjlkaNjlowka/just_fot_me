#include <iostream>
#include "../func/func.h"

int main() {
	int num;
	std::cout << "Введите число:";
	std::cin >> num;
	std::cout << std::endl;

	for (int i = 9; i <= num; i++) {
		if (math::num_is_prime(i) && math::num_is_prime(i-6))
			std::cout << i-6 << " " << i << std::endl;
	}
	return 0;
}
