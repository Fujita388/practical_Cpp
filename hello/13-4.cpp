/// 0~31の数字を各ビットに保存 ///


#include <iostream>


const unsigned int BIT_FLAG = (1 << 0);


class small_set {
	private:
		unsigned int x;  // 保存するビット
		int bits = 0;  // フラグ
	public:
		small_set();  // 初期化
	
		void set(unsigned int item);  // 要素を設定する

		void clear(unsigned int item);  // 要素をクリアする

		int test(unsigned int item);  // 要素を設定されているか判断する
};


inline small_set::small_set() {
	x = 0;
	bits |= BIT_FLAG;  // フラグを初期化 
}


inline void small_set::set(unsigned int item) {
	x = ((bits << item) | x);
}


inline void small_set::clear(unsigned int item) {
	x = ((bits << item) ^ x);
}


inline int small_set::test(unsigned int item) {
	if (((bits << item) & x) != 0) 
		return 1;
	else
		return 0;
}


int main() {
	small_set a_set;

	a_set.set(3);

	std::cout << a_set.test(3) << '\n';

	a_set.set(5);
	a_set.set(5);

	std::cout << a_set.test(3) << '\n';
	std::cout << a_set.test(5) << '\n';
	std::cout << a_set.test(0) << '\n';

	a_set.clear(3);

	std::cout << a_set.test(5) << '\n';	
	std::cout << a_set.test(3) << '\n';	
	
	return 0;
}
