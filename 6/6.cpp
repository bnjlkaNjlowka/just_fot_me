#include <iostream>
#include "../func/func.h"

int main() {
	int num;
	std::cout << "Введите число:";
	std::cin >> num;
	std::cout << std::endl;

	for (int i = 1; i <= num; i++) {
		int temp_num = math::sum_delitelei_num(i);
		if (temp_num > i) 
			std::cout << i << " " <<  ((temp_num + i) / float (i)) << std::endl;
	}
	return 0;
}

