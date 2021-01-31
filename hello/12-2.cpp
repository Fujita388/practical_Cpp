/// 時刻の差分(分) ///


#include <iostream>


struct day {
	int hour;  // 時
	int minute;  // 分
	int month;  // 月
	int date;  // 曜日
};


struct day log[2] {
	{6, 15, 5, 11},
	{8, 10, 7, 12}
};


int calc(int hour1, int minute1, int hour2, int minute2) {
	int def_min;  // 分の差
	int sum;  // 時間差(分)

	int def_hour = hour2 - hour1;  // 時の差

	if (minute2 >= minute1) {
		def_min = minute2 - minute1;
		sum = def_hour*60 + def_min;
	}
	else {
		def_min = minute2 + 60 - minute1;
		sum = (def_hour-1)*60 + def_min;
	}
	return sum;
}


int main() {
	std::cout << log[0].month << "月" << log[0].date << "日" << log[0].hour << "時" << log[0].minute << "分" << '\n';
	std::cout << log[1].month << "月" << log[1].date << "日" << log[1].hour << "時" << log[1].minute << "分" << '\n';
	std::cout << "時間差は" << calc(log[0].hour, log[0].minute, log[1].hour, log[1].minute) << "分" << '\n';
	return 0; 
}
