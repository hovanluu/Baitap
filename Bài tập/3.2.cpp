#include<iostream>
using namespace std;
int main() {
	int a[100];
	int n = 0;
	do {
		cout << "Nhap gia tri thu " << n + 1 << " la : ";
		cin >> a[n];
		n++;
	} while (a[n - 1] != 0);
	int i, j;
	int tmp;
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	cout << "gia tri cua mang giam dan la : ";
	for (i = 0; i < n - 1; i++) {
		cout << a[i] << " " ;
	}
}



