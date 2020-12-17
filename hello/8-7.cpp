###0~100の数字を英語に###


#include <iostream>


int num;     // 入力した数
int i;       // インデックス
int n_10;    // 10の位
int n_1;     // 1の位


int main(){
    std::cout << "0~100の整数を入力してください" << "\n";
    std::cin >> num;

    n_10 = num / 10;
    n_1 = num % 10;

    switch (n_10) {
        case 0:
            if (num == 0)
                std::cout << "zero" << "\n";
            break;
        case 1:
            switch (num) {
                case 10:
                    std::cout << "ten";
                    break;
                case 11:
                    std::cout << "eleven";
                    break;
                case 12:
                    std::cout << "twelve";
                    break;
                case 13:
                    std::cout << "thirteen";
                    break;
                case 14:
                    std::cout << "fourteen";
                    break;
                case 15:
                    std::cout << "fifteen";
                    break;
                case 16:
                    std::cout << "sixteen";
                    break;
                case 17:
                    std::cout << "seventeen";
                    break;
                case 18:
                    std::cout << "eighteen";
                    break;
                case 19:
                    std::cout << "nineteen";
                    break;
            }
            break;
        case 2:
            std::cout << "twenty";
            break;
        case 3:
            std::cout << "thirty";
            break;
        case 4:
            std::cout << "forty";
            break;
        case 5:
            std::cout << "fifty";
            break;
        case 6:
            std::cout << "sixty";
            break;
        case 7:
            std::cout << "seventy";
            break;
        case 8:
            std::cout << "eighty";
            break;
        case 9:
            std::cout << "ninety";
            break;
        case 10:
            std::cout << "one hundred";
            break;
    }

    if ((num > 20) && (n_1 != 0)) 
        std::cout << "-";
    
    if ((num < 10) || (num > 20)) { 
        switch (n_1) {
            case 1:
                std::cout << "one";
                break;
            case 2:
                std::cout << "two";
                break;
            case 3:
                std::cout << "three";
                break;
            case 4:
                std::cout << "four";
                break;
            case 5:
                std::cout << "five";
                break;
            case 6:
                std::cout << "six";
                break;
            case 7: 
                std::cout << "seven";
                break;
            case 8:
                std::cout << "eight";
                break;
            case 9:
                std::cout << "nine";
                break;
        }
    }
    std::cout << "\n";
    return 0;
}
       
            



        
