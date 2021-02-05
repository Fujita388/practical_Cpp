/// クラス メンバ関数put, test ///


#include <iostream>


int array[10] = {0, 4, 2, 3, 4, 1, 6, 4, 2, 0};


class parity {
	private:
		int count;  // 要素数カウント
	public:
		parity();  // 初期化
		
		void put(const int x);  // 要素数のカウント

		void test();  // 偶数回:ture 奇数回:false
};


inline parity::parity() {
	count = 0;  // 要素数を0に初期化
}


inline void parity::put(const int x) {
	for (int i = 0; i < 10; ++i) {
		if (array[i] == x)
			++count;
	}
}


inline void parity::test() {
	if (count % 2 == 0)
		std::cout << "true" << '\n';
	else
		std::cout << "false" << '\n';
}


int main() {
	parity a_parity;  // 変数

	a_parity.put(2);
	a_parity.test();

	return 0;
}





