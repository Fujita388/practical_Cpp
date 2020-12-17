///文字列の'-'を'_'に変換///


#include <iostream>
#include <string>


int main(){
    std::string change(std::string line, int len);   //関数のプロトタイプ
    std::string old_line = "alkdfn-nya-akdfn_as-";
    
    std::cout << change(old_line, old_line.length()) << '\n';
    return 0;
}


std::string change(std::string line, int len) {
    for (int i = 0; i < len; ++i) {
        if (line[i] == '-' )
            line[i] = '_';
    }
    return line;
}


