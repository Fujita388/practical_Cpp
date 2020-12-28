#include <iostream>


int result;              // 計算結果
char oper_char;          // ユーザが指定する演算子
int value;               // 演算子のあとに指定される値


int main(){
    result = 0;          // resultを初期化する

    // 無限ループ(ただし、break文が実行されるとループを抜ける)
    while (true) {
        std::cout << "Result: " << result << '\n';
        std::cout << "Enter operator and number: ";

        std::cin >> oper_char >> value;

        if ((oper_char == 'q') || (oper_char == 'Q'))
            break;

        if (oper_char == '+') {
            result += value;
        }
        else if (oper_char == '-') {
            result -= value;
        } 
        else if (oper_char == '*') {
            result *= value;
        }
        else if (oper_char == '/') {
            if (value == 0) {
                std::cout << "Enter: Divide by zero\n";
                std::cout << "  operation ignored\n";
            }
            else 
                result /= value;
        }
        else {
            std::cout << "Unknown operator " << oper_char << '\n';
        }
    }
    return 0;
}






