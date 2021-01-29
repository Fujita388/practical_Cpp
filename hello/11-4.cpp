///セットされたビット数、ビット構成を表示///


#include <iostream>


// 整数のセットされているビット数を数える
int count_bits(unsigned int x) {
	int bits = 0;
	while (x) {
		if (x & 1U) 
			++bits;
		x >>= 1;
	}
	return bits;
}


// int型のビット数を求める
int int_bits() {
	return count_bits(~0U);
}


// ビット構成を表示
void print_bits(unsigned int x) {
	for (int i = int_bits() - 1; i >= 0; --i)
		std::cout << ((x >> i) & 1U ? '1' : '0');
	std::cout << '\n';
}


int main() {
	unsigned int s;
	
	std::cout << "整数を入力してください" << '\n';
	std::cin >> s;

	std::cout << "ビット数:" << count_bits(s) << '\n';
	std::cout << "ビット構成:"; 
	print_bits(s);
	
	return 0;
}

	

