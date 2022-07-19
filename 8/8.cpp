#include <iostream>

int sum_cift_num(int num) {
	int cifra1 = num / 100;
	int cifra2 = (num - (cifra1 * 100)) / 10;
	int cifra3 = num - (cifra1 * 100) - (cifra2 * 10);

	int ans = (cifra1 * cifra1 * cifra1) + (cifra2 * cifra2 * cifra2) + (cifra3 * cifra3 * cifra3);
	return ans;
}

int main() {
	for (int i = 100; i < 1000; i++) {
		if (sum_cift_num(i) == i)
			std::cout << i << std::endl;
	}
	return 0;
}
