#include <iostream>
#include <ostream>
#include <vector>
#include <string>
#include <utility>

std::string roman(int num) {
	std::vector<std::pair<int, std::string>> r {
		{1000, "M"}, {900, "CM"}, {500, "D"},
		{400, "CD"}, {100, "C"}, {90, "XC"},
		{50, "L"}, {40, "XL"}, {10, "X"},
		{9, "IX"}, {5, "V"}, {4, "IV"},
		{1, "I"}};
	
	std::string otvet = "";
	for (int i  = 0; i < 13; i++) {
		while (num >= r[i].first) {
			otvet = otvet + r[i].second;
			num = num - r[i].first;	
		}
	}
	return otvet;
}

int main() {
	std::string n;
	int num;
	std::cout << "Введите число: ";
	std::cin >> num;
	std::cout << std::endl;
	n = roman(num);
	std::cout << "Число в римской записи: " << n << std::endl;
	return 0;
}
