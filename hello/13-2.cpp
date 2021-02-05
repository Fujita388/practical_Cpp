#include <iostream>


int array[5] = {100, 20, 30, 300, 50};


class check {
	private:
		int sum;  // 合計金額
	public:
		check();  // 初期化

		void add_item(int amount[5]);  // 新しいエントリを追加
		
		int total();  // 全てのエントリの合計金額を返す
};


inline check::check() {
	sum = 0;  // 金額を0に初期化
}


inline void check::add_item(int amount[5]) {
	for (int i = 0; i < 5; ++i)
		sum += amount[i];
}


inline int check::total() {
	return sum;
}


int main() {
	check a_check;  // 変数

	a_check.add_item(array);
	std::cout << a_check.total() << '\n';
	
	return 0;
}
