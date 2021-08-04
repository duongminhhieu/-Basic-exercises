
#include"MyFunction.h"

// Nơi chạy chương trình
void main() {

	int day, month, year, tongngay = 0;
	cout << " Nhap ngay , thang , nam : ";
	cin >> day >> month >> year;

	if (soNgayTrongThang(year, month) == -1 || day < 1 || day > soNgayTrongThang(year, month)) cout << endl << "  Ban da nhap sai ! ";
	else {
		cout << endl << endl << " Du lieu nhap vao hop le ! ";
		cout << endl << " Thang do co " << soNgayTrongThang(year, month) << " ngay ";

		for (size_t i = 1; i < month; i++)
		{
			tongngay += soNgayTrongThang(year, month);
		}

		tongngay += day;
		cout << endl << " Hom do la ngay thu " << tongngay << " trong nam. ";

		cout << endl << " Hom do la : ";
		InRaThu(TinhTongNgay(year, month, day));

		cout << endl << " Ngay ke tiep : ";
		InRaNgayKeTiep(year, month, day);

		cout << endl << " Ngay hom truoc : ";
		InRaNgayHomTruoc(year, month, day);

		if (kiemTraNamNhuan(year) == 1) cout << endl << " Nam " << year << " la nam Nhuan ! ";
		else cout << endl << year << " KHONG phai nam Nhuan !";
	}

	cout << endl << endl;

	system("pause");
}
