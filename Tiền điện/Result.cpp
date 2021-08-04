#include<iostream>
#include"My Function.h"

using namespace std;

int main() {

	unsigned int kwh;

	cout << " Nhap luong dien tieu thu : ";
	cin >> kwh;

	cout << endl << " So tien phai tra la : " << TinhTien(kwh) << endl ;

	system("pause");
	return 0;
}



