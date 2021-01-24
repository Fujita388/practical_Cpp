#include <iostream>

#define FIRST_PART 7
#define LAST_PART 5 
#define ALL_PART (FIRST_PART + LAST_PART)


int main(){
    std::cout << "The square of all the parts is " << ALL_PART * ALL_PART << '\n';
    return 0;
}


// gcc -E: プリプロセス処理が終了したところで停止。コンパイルはしない。 出力はプリプロセス済みのソースコードであり、標準出力へと送られる。
// GCC はプリプロセスを必要としない入力ファイルを全て無視します。
