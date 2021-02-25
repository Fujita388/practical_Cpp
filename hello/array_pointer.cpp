#include <iostream>


int main(){
    int a[5] = {1, 2, 3, 4, 5};


    int *p = a;  // ポインタpを宣言
	std::cout << *p << '\n';
	std::cout << *(p + 1) << '\n';
	std::cout << p << '\n';


    std::cout << *a << '\n';  //a[0]の要素       
    std::cout << *(a + 1) << '\n';  //a[1]の要素
    std::cout << a << '\n';           //配列a[]の先頭アドレス
    std::cout << &a[0] << '\n';
    std::cout << a + 1 << '\n';        
    std::cout << &a[1] << '\n';       //要素a[1]のアドレス

    std::cout << sizeof(a) << '\n';   //配列a[]のbite数
   
    std::cout << &a[1] - &a[0] << '\n';   //結果は1: 4biteをsizeof(整数型)で割った値

    std::cout << &a[5] - &a[0] << '\n';   //配列a[]の長さ
    std::cout << sizeof(a) / sizeof(a[0]) << '\n';   //配列a[]の長さ

    return 0; 
}


