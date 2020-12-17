###素数判定###


#include <iostream>


int num;       // 入力した数
int i;         // インクリメント


int main(){
    std::cout << "任意の数を入力してください" << "\n";
    std::cin >> num;
    
    i = 1;
    while (i < num - 1) {
        ++i;
        if (num % i == 0) {
            std::cout << "入力した値は素数ではありません" << "\n";
            break;
        }
        if (i == num - 1) {
            std::cout << "入力した値は素数です" << "\n";
        }
    }
    return 0;
}

            





