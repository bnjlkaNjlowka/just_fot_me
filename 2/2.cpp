#include <iostream>
#include <iterator>
#include <ostream>

int algoritm_euklid(int num1,int num2) {
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
		num1=algoritm_euklid(num2, num1);

	if (num1 == 0)
		return num2;
	else
		return num1;
}

int main() {
	int num1, num2;
	std::cout << "Введите число 1:";
	std::cin >> num1;
	std::cout << std::endl;
	std::cout << "Введите число 2:";
	std::cin >> num2;
	std::cout << std::endl;
	int ans=algoritm_euklid(num1, num2);
	std::cout << "Наибольший общий делитель введенных чисел:" << ans << std::endl; 
	return 0;
}
