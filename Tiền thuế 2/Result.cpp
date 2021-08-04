#include <iostream>
#include"My Function.h"

using namespace std;
void main()
{
	long int tnhap, songuoicgc;
	cout << " So thu nhap cua ban: "; cin >> tnhap;
	cout << " So nguoi co gia canh trong gia dinh: "; cin >> songuoicgc;
	cout << " So tien thue thu nhap ban phai tra: " << tinh(tnhapcgc(tnhap, songuoicgc));
}