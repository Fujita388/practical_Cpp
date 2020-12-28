#include <iostream>


int result;        // 計算結果
char oper_char;    // ユーザが指定する演算子
int value;         // 演算子のあとに指定される値


int main(){
    result = 0;    // resultを初期化する

    // 無限ループ(ただし、break文が実行されるとループを抜ける)
    while (true){
        std::cout << "Result: " << result << "\n";

        std::cout << "Enter operator and number: ";
        std::cin >> oper_char >> value;

        // std::cout << "## after cin " << oper_char << "\n";

        if (oper_char == '+'){                // ""だと文字列になってしまう
            // std::cout << "## after if " << oper_char << "\n";
            result += value;
        }
        else{
            std::cout << "Unknown operator " << oper_char << "\n";
        }
    }
    return 0;
}

