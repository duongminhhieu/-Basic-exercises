
#define Co -1

unsigned long long int  Tinh(unsigned int kwh, unsigned int R, unsigned int L, unsigned int P) 
{

	unsigned long long int Tien = 0 ;
	
	if (kwh < L) return 0;
	else {
		if (kwh < R || R == Co) return (kwh - L) * P;
		else Tien = (R - L) * P;
	}

	return Tien;
}


unsigned long long int TinhTien(unsigned int kwh) 
{
	unsigned int L1 = 0, L2 = 100, L3 = 200, L4 = 400, L5 = 600, L6 = 800;
	unsigned int  P1 = 1678, P2 = 1734, P3 = 2014, P4 = 2536, P5 = 2834, P6 = 2927;

	unsigned long long int Tien = Tinh(kwh, L2, L1, P1)
		+ Tinh(kwh, L3, L2, P2)
		+ Tinh(kwh, L4, L3, P3)
		+ Tinh(kwh, L5, L4, P4)
		+ Tinh(kwh, L6, L5, P5)
		+ Tinh(kwh, Co, L6, P6);

	Tien = Tien + Tien * 0.1;
	return Tien;
}