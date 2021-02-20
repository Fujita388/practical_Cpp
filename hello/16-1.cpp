#include <cstdlib>
#include <cstdio>
#include <iostream>


int main() {
	int count = 0;  // 行数カウント
	std::FILE *data_file;  // ファイル名
	data_file = fopen("sample.txt", "r");  // ファイルを開く

	if (data_file == NULL) {
		std::cerr << "Error: Could not open sample.txt\n";
		exit (8);
	}
	while (true) {
		int c = std::fgetc(data_file);  // fgetcはファイルから1文字を読み取る
		if (c == EOF)
			break;
		if (c == '\n')
			++count;
	}
	std::fclose(data_file);  // ファイルを閉じる
	std::cout << "ファイルの行数:"<< count << '\n';
	return 0;
}



