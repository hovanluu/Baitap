#include<iostream>
using namespace std;
int main() {
	int a[100];
	int n = 0;
	int tmp;
	do {
		cout << "phan tu thu " << n + 1 << " la : ";
		cin >> a[n];
		n++;
	} while (a[n - 1] != 0);
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	cout << "thu tu cua mang la : ";
	for (int i = 0; i < n - 1; i++) {
		cout << a[i] << " ";
	}
}