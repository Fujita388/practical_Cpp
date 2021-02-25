#include <iostream>
#include <cstdio>
#include <cstdlib>


int get_size(char *fname) {  // int get_size(char fname[])
	std::FILE *fp;
	int fsize;
	fp = std::fopen(fname, "rb");

	if (fp == NULL) {
		std::cerr << "Error: Unable to input file " << fname << '\n'; 
		exit (8);
	}
	std::fseek(fp, 0L, SEEK_END);  // fpの位置をファイルの最後へ移動する
	fsize = std::ftell(fp);  // fpの現在の位置の値を取得する
	std::fclose(fp);
	return fsize;
}


void reader(char *fname, char *buf) {  // void reader(char fname[], char buf[])
	std::FILE *fp;
	int i = 0;
	fp = std::fopen(fname, "r");

	if (fp == NULL) {
		std::cerr << "Error: Unable to input file " << fname << '\n';
		exit (8);
	}
	while ((buf[i] = fgetc(fp)) != EOF)
		++i;
	std::fclose(fp);
}


void writer(char *fname, char *buf) {  // void writer(char fname[], char buf[])
	std::FILE *fp;
	int i;
	fp = std::fopen(fname, "w");

	if (fp == NULL) {
		std::cerr << "Error: Unable to input file" << fname << '\n';
		exit (8);
	}
	for (i = 0; buf[i] != EOF; ++i) {
		if (buf[i] == '\t')  // タブ文字が出てきたら半角スペース4つに置き換える
			std::fprintf(fp, "    ");
		else
			std::putc(buf[i], fp);
	}
	std::fclose(fp);
}	


int main() {
	char in_fname[] = "sample.txt";  // コピー元のファイル
	char out_fname[] = "out_sample.txt";  // コピー先のファイル
	
	int in_fsize = get_size(in_fname);  // コピー元のファイルのサイズ
	char buf[in_fsize];  // ファイルのコピーの一時保存場所
	reader(in_fname, buf);  // コピー元のファイルをbufにコピー
	writer(out_fname, buf);  // コピー先のファイルにbufをコピー

	return 0;
}
