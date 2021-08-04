//Tại đây là nơi chạy chương trình 

#include <iostream>
#include "Function.h"

using namespace std;

int main() {

	unsigned long long int thuNhap;
	int giamTru;

	Nhap(thuNhap, giamTru);

	cout << endl << " So tien Thue ban phai tra la : " << tinhThue(thuNhap, giamTru);
	

	return 0;

}