#include <iostream>
#include <ostream>

int check_kratnost_3_5(int num){
	if (num % 3 == 0 || num % 5 == 0){
		return 1;
	}
	return 0;
}

int main(){
	std::cout << "Введите число: ";
	int num;
	unsigned long long summ=0;
	std::cin >> num;
	std::cout << std::endl;

	for (int i = 1; i <= num; i++){
		if (check_kratnost_3_5(i)==1)
			summ=summ+i;
	}

	std::cout << "Сумма чисел кратных 3 и 5 до " << num << ":" << summ << std::endl;

	return 0;
}




