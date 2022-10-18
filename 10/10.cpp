#include <iostream>
#include <vector>

std::vector <int> iz_10_v_2(int num) {
	std::vector <int> ans;
	int ost = 0, n = 0;
	while (num != 1) {
		ost = num % 2;
		num = num / 2;
		std::cout << ost << std::endl;
		ans.push_back(ost);
		n = n + 1;
	}
	ans.push_back(1);
	return ans;
}

int main() {
	std::vector <int> ans;
	int num;
	std::cout << "Введите число: ";
	std::cin >> num;
	std::cout << std::endl;	
	ans = iz_10_v_2(num);
	for (int i = ans.size() - 1; i != -1; i--)
		std::cout << ans[i];
	std::cout << std::endl;
	return 0;
}
