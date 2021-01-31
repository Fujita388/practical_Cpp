/// 郵送ラベルを作成 ///


#include <iostream>


struct mailing {
	char name[60];  // 姓、名
	char address1[60];  // 番地
	char address2[60];  // 
	char city[40];  // 市
	char state[10];  // 都道府県
	int zip;  //  郵便番号
};


struct mailing HOKKAIDO[4] = {  // 構造体の配列を宣言  mailing:型
	{"YAMADA TARO", "ABC", "1-1-1", "HAKODATE", "HOKKAIDO", 11223344},
	{"SATO TAKERU", "DEF", "1-1-1", "HAKODATE", "HOKKAIDO", 11223344},
	{"NOMIRA RYO", "GHI", "1-1-1", "SAPPORO", "HOKKAIDO", 11223344},
	{"SASAKI SHUHEI", "JKL", "1-1-1", "SAPPORO", "HOKKAIDO", 11223344}
};


void print_mailing(struct mailing* temp) {
	for (int i = 0; i < 4; ++i) {
		std::cout << "mailing: " << i << '\n';
		std::cout << "name: " << temp -> name<< '\n';
		std::cout << "address1: " << temp -> address1 << '\n';
		std::cout << "address2: " << temp -> address2 << '\n';
		std::cout << "city: " << temp -> city << '\n';
		std::cout << "state: " << temp -> state << '\n';
		std::cout << "zip: " << temp -> zip << '\n';
		std::cout << " " << '\n';
	}
}


int main() {
	print_mailing(HOKKAIDO);
	return 0;
}

