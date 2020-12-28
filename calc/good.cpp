#include <iostream>
#include <cstdlib>


int number_to_guess;        // 推測の対象となる乱数
int low_limit;              // プレーヤーが推測する範囲の現在の下限
int high_limit;             // プレーヤーが推測する範囲の現在の上限
int guess_count;            // プレーヤーが推測した回数
int player_number;          // プレーヤーが推測した数


int main(){
    while (true) {
        /* 
         * 純粋な乱数ではない(制限を参照)
         */
        number_to_guess = rand() % 100 + 1;

        // ループを開始するために変数を初期化する
        low_limit = 0;
        high_limit = 100;
        guess_count = 0;

        while (true) {
            // ユーザに範囲を知らせ、ユーザが推測した数を受け取る
            std::cout << "Bounds " << low_limit << " - " << high_limit << '\n';
            std::cout << "Value[" << guess_count << "]?" ;

            ++guess_count;

            std::cin >> player_number;

            // ユーザの推測は当たっているか
            if (player_number == number_to_guess)
                break;

            // 推測をやり直すために、範囲を調整する
            if (player_number < number_to_guess)
                low_limit = player_number;
            else
                high_limit = player_number;
        }
        std::cout << "Bingo\n";
    }
    return 0;
}





