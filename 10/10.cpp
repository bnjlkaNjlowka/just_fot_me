#include<iostream>
#include <vector>

int code_to_gray(int num) {
	return num ^ (num >> 1);
}

int gray_decode(int num) {
	int temp_num = num;
	while (num != 0) {
		temp_num = temp_num ^ (num >> 1);
	}
	return temp_num;
}

std::vector <int> iz_10_v_2(int num) {
	std::vector ans;
	while (num != 1) {
		ans = 




