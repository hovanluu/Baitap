#include<iostream>
using namespace std; 
int Tong(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n + Tong(n - 1);
	}
}
int main() {
	int n;
	int S = 0;
	cout << "nhap n : ";
	cin >> n; 
	Tong(n);
	cout << "S(" << n << ") =" << Tong(n);
}