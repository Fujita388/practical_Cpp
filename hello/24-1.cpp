#include <iostream>
#include <cstring>


// min関数のテンプレート
template<typename kind> 
kind min(kind d1, kind d2) {
	if (d1 < d2)
		return d1;
	return d2;
}


// char* を特殊化
const char *const min(const char *const d1, const char *const d2) {
	if (std::strcmp(d1, d2) < 0)
		return d1;
	return d2;
}


int main() {
	std::cout << "min(1, 2) " << min(1, 2) << '\n';
	std::cout << "min(2, 1) " << min(2, 1) << '\n';

	std::cout << "min(\"able\", \"baker\")" << min("able", "baker") << '\n';
	std::cout << "min(\"baker\", \"able\")" << min("baker", "able") << '\n';
	return 0;
}

