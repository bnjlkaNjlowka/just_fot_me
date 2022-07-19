#include <iostream>
#include <vector>
#include "../func/func.h"

int main() {
	std::vector <int> ans;
	int num;
	std::cout << "Введите число";
	std::cin >> num;
	std::cout << std::endl;
	
	ans = math::prostie_deliteli_num(num);
	int size = ans.size();
	for (int i = 0; i < size; i++) 
		std::cout << ans[i] << std::endl;
	return 0;
}
