#include<iostream>
using namespace std;
int main() {
	int d = 1000000007;
	long long n;
	cin >> n;
	long long k = n;
	long long h = (n + 1);
	if (k % 2 == 0) k /= 2;
	else h /= 2;
	// tinh ket qua cua (k*h)%d
	long long kq = ((k % d) * (h % d)) % d;
	cout << kq;
}