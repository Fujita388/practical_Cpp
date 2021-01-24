#include <iostream>

#define CHANGE(num1, num2) std::cout << num2 << " " << num1 << '\n';

int main(){
	int a = 10;
	int b = 12;
	CHANGE(a, b)
	return 0;
} 

// gcc -E: プリプロセス処理が終了したところで停止。コンパイルはしない。 出力はプリプロセス済みのソースコードであり、標準出力へと送られる。
// GCC はプリプロセスを必要としない入力ファイルを全て無視する。

