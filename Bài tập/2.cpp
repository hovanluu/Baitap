#include<iostream>
using namespace std;
int Tich(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * Tich(n - 1);
	}
}
int main() {
	int n;
	int S = 1;
	cout << "nhap n : ";
	cin >> n;
	Tich(n);
	cout << "S(" << n << ") =" << Tich(n);
}