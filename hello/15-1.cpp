/// ポインタを使って配列の各要素を0に ///


#include <iostream>


int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};


int main() {
	int* num = array;
	
	for (int i = 0; i < 10; ++i) {
		if (*num != 0)
			*num = 0;
		std::cout << *num << " ";  // 要素を表示
		++num;  // ポインタをインクリメント
	}
	std::cout << '\n';
	return 0;
}



