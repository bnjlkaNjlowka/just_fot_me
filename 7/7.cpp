#include <iostream>
#include "../func/func.h"

int main() {
	for (int i = 2; i < 1000000; i++) {
		int temp_num = math::sum_delitelei_num(i);
		int temp_num2 = math::sum_delitelei_num(temp_num);
		if (temp_num2 == i && i < temp_num)
			std::cout << i << " " << temp_num << std::endl;
	}
	return 0;
}
