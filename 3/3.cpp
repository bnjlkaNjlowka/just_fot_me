#include <iostream>
#include "../func/func.h" 

int main() {
	int num1, num2;
	std::cout << "Введите число 1:";
	std::cin >> num1;
	std::cout << std::endl;

	std::cout << "Введите число 2:";
	std::cin >> num2;
	std::cout << std::endl;

	int gcd = math::algoritm_euklid(num1, num2);

	int lcm = (num1 * num2) / gcd;

	std::cout << "Наименьшее общее кратное введенных чисел:" << lcm << std::endl;

	return 0;
}
