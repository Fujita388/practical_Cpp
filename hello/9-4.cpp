///各桁の総和///


#include <iostream>




int main(){
    int sum_each(void);  //関数のプロトタイプ
    std::cout << sum_each() << '\n';
    return 0;
}


int sum_each(void) {     //引数なし
    int index;   //インデックス
    int l = 0;       //入力する数
    int rest = 0;    //あまり
    std::cout << "数列を入力してください" << '\n';
    std::cin >> l;
    
    while (true) {
        rest += l % 10;
        l = l / 10;

        if (l == 0)
            break;
    }

    return rest; 
}




