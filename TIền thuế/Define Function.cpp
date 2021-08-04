//Tại đây định nghĩa hàm 

#include<iostream>
#include"Function.h"

using namespace std;

#define VoCuc 2

void Nhap(unsigned long long int& thuNhap, int& soLuongGiamTru) {

	while ( true )
	{
		cout << " Nhap so tien thu nhap cua ban : ";
		cin >> thuNhap;

		cout << " Nhap so nguoi giam tru cua ban : ";
		cin >> soLuongGiamTru;

		if (thuNhap > 0 && soLuongGiamTru >=  0) break;

	}

}

unsigned long long int Tinh(unsigned long long int thuNhap, unsigned long long int L, unsigned long long int R, double phanTram)
{
	unsigned long long int  Tien = 0;
	if (thuNhap < L) return Tien;
	else {
		if (thuNhap < R || R == VoCuc)  return (thuNhap - L) * (phanTram / 100);
		else
		{
			Tien = (R - L) * (phanTram / 100);
		}
	}

	return Tien;
}


unsigned long long int tinhThue(unsigned long long int thuNhap, int soLuongGiamTru) {

	unsigned long long int Tien;

	if (thuNhap > soLuongGiamTru * (1600000)) thuNhap = thuNhap - soLuongGiamTru * 1600000;
	else thuNhap = 0;
	
	double P1 = 0, P2 = 5, P3 = 10, P4 = 15, P5 = 20, P6 = 25, P7 = 30, P8 = 35;
	unsigned long long int L1 = 4000000, L2 = 6000000, L3 = 9000000, L4 = 14000000, L5 = 24000000, L6 = 44000000, L7 = 84000000;
	Tien = Tinh(thuNhap, 0, L1, P1)
		+ Tinh(thuNhap, L1, L2, P2)
		+ Tinh(thuNhap, L2, L3, P3)
		+ Tinh(thuNhap, L3, L4, P4)
		+ Tinh(thuNhap, L4, L5, P5)
		+ Tinh(thuNhap, L5, L6, P6)
		+ Tinh(thuNhap, L6, L7, P7)
		+ Tinh(thuNhap, L7, VoCuc, P8);

	return Tien;

}