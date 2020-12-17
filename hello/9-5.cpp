///数列の最大値///


#include <iostream>


int main(){
    int max_value(int array[], int len);    //関数のプロトタイプ
    int given[5] = {1, 2, 3, 4, 5};   //配列
    
    std::cout << "最大の要素は" << max_value(given, sizeof(given)/sizeof(given[0])) << "である" << '\n';  // sizeof()/sizeof() は同じブロック内で宣言した変数を使う
    return 0;
}


int max_value(int array[], int len) {   //len:配列の長さ
    int index;
    int biggest = 0;

    for (index = 1; index < len; ++index) {
        if (array[biggest] < array[index])
            biggest = index;
    }
    return array[biggest];
}





