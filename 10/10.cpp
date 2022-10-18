#include <iostream>
#include <vector>

std::vector <int> iz_10_v_2(int num) {
	std::vector <int> ans;
	int ost = 0, n = 0;
	while (num != 1) {
		ost = num % 2;
		num = num / 2;
		//std::cout << ost << std::endl;
		ans.push_back(ost);
		n = n + 1;
	}
	ans.push_back(1);
	return ans;
}

std::vector <int> v_code_gray(int num) {
	int temp_ans = num ^ (num >> 1);
	std::vector <int> ans = iz_10_v_2(temp_ans);
	std::cout << "Декодированный код Грея: " << temp_ans << std::endl;
	return ans;
}

int main() {
	std::vector <int> ans, code_gray;
	int num;
	std::cout << "Введите число: ";
	std::cin >> num;
	std::cout << std::endl;	
	ans = iz_10_v_2(num);
	std::cout << "Двоичный код: ";
	for (int i = ans.size() - 1; i != -1; i--)
		std::cout << ans[i];
	std::cout << std::endl;

	code_gray = v_code_gray(num);
	std::cout << "Код Грея: ";
	for (int i = code_gray.size() - 1; i != -1; i--)
		std::cout << code_gray[i];
	std::cout << std::endl;	
	return 0;
}
