///10*10の正方形のビットマップの描画///


#include <iostream>


#define SET_BIT(x, y) graphics[(x)/8][(y)] |= (0x80 >> ((x)%8))


const int X_SIZE = 16;  // ビット
const int Y_SIZE = 16;


char graphics[X_SIZE / 8][Y_SIZE];


void print_graphics();


int main() {
	int loc1;  
	int loc2;

	for (loc1 = 1; loc1 < 11; ++loc1) {
		for (loc2 = 1; loc2 < 11; ++loc2) {
				SET_BIT(loc1, loc2);
		}
	}
	print_graphics();
	return 0;
}


void print_graphics() {
	int x, y;  
	unsigned int bit;
	for (y = 0; y < Y_SIZE; ++y) {
		for (x = 0; x < X_SIZE / 8; ++x) {
			for (bit = 0x80; bit > 0; bit = (bit >> 1)) {
				if ((graphics[x][y] & bit) != 0)
					std::cout << "X";
				else
					std::cout << ".";
			}
		}
		std::cout << '\n';
	}
}



