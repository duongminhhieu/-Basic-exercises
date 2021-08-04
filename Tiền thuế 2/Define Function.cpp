#include <iostream>
#include"My Function.h"

using namespace std;

#define vocuc -1

long int tinhthue(long int L, long int R, double ptram, long int tnhap)
{
	long int kq = 0;
	if (tnhap < L) kq;
	else {
		if (tnhap < R || R == vocuc)kq = (tnhap - L) * (ptram / 100);
		else kq = (R - L) * (ptram / 100);
	}
	return kq;
}


long int tnhapcgc(long int tnhap, int songuoicgc)
{
	long int k = 1600000;
	switch (songuoicgc)
	{
	case 0: tnhap = tnhap; break;
	default:
		tnhap = tnhap - k * songuoicgc; break;
	}
	return tnhap;
}


long int tinh(long int k)
{
	long int L0 = 0, L1 = 4000000, L2 = 6000000, L3 = 9000000, L4 = 14000000, L5 = 24000000, L6 = 44000000, L7 = 84000000;
	long int P0 = 0, P1 = 5, P2 = 10, P3 = 15, P4 = 20, P5 = 25, P6 = 30, P7 = 35;
	long int s = tinhthue(L0, L1, P0, k) + tinhthue(L1, L2, P1, k)
		+ tinhthue(L2, L3, P2, k) + tinhthue(L3, L4, P3, k)
		+ tinhthue(L4, L5, P4, k) + tinhthue(L5, L6, P5, k)
		+ tinhthue(L6, L7, P6, k) + tinhthue(L7, vocuc, P7, k);
	return s;
}