
#include"MyFunction.h"



// Định nghĩa hàm 
int kiemTraNamNhuan(int year)
{
	if (year > 10000 || year < 1800) return -1;
	else if ((year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0)) return 1;
	else return 0;
}

int soNgayTrongThang(int year, int month) {

	if (kiemTraNamNhuan(year) == -1 || month > 12 || month < 1) return -1;
	else {

		switch (month)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
		case 4: case 6: case 9: case 11: return 30;

		default:
			if (kiemTraNamNhuan(year)) return 29;
			else return 28;
			break;
		}


	}

}

void InRaNgayKeTiep(int year, int month, int day) {
	int ngay, thang, nam;

	if (day == soNgayTrongThang(year, month)) {
		if (month == 12) cout << " 1/1/" << year + 1;
		else cout << " 1/" << month + 1 << "/" << year;
	}
	else {
		cout << day + 1 << "/" << month << "/" << year;
	}

}

unsigned long long int TinhTongNgay(int year, int month, int day) {
	unsigned long long int Tong1 = 0, Tong2 = 0;
	int count = 0;
	for (size_t i = 1800; i < year; i++)
	{
		Tong1 += 365;
		if (kiemTraNamNhuan(i) == 1) count++;
	}
	Tong1 += count;

	for (size_t i = 1; i < month; i++)
	{
		Tong2 += soNgayTrongThang(year, i);

	}
	Tong2 += day - 1;


	return Tong1 + Tong2;
}

void InRaThu(unsigned long long int Sumday) {
	switch (Sumday % 7)
	{
	case 0: {
		cout << " Thu 4";
		break;
	}
	case 1: {
		cout << " Thu 5";
		break;
	}
	case 2: {
		cout << " Thu 6";
		break;
	}
	case 3: {
		cout << " Thu 7";
		break;
	}
	case 4: {
		cout << " Chu Nhat ";
		break;
	}
	case 5: {
		cout << " Thu 2";
		break;
	}
	case 6: {
		cout << " Thu 3";
		break;
	}
	default:
		break;
	}
}

void InRaNgayHomTruoc(int year, int month, int day) {
	if (day == 1) {
		if (month == 1) cout << " 31/12/" << year - 1;
		else cout << soNgayTrongThang(year, month - 1) << "/" << month - 1 << "/" << year;
	}
	else {
		cout << day - 1 << "/" << month << "/" << year;
	}
}