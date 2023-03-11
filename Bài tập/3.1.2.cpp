#include<iostream>
using namespace std;
void nhapmang(int a[100],int &n) {
	do {
		cout << "gia tri so thu " << n + 1 << " la : ";
		cin >> a[n];
		n++;
	} while (a[n - 1] != 0);
}

void inrerchangesort(int a[100], int n) {
	int i, j;
	int tmp;
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
void xuatmang(int a[100], int n) {
	int i ;
	for (short i = 0; i < n; i++)
	cout << a[i] << " ";
}
int main() {
	int a[100];
	int n = 0;
	nhapmang(a, n);
	cout << "Thu tu tang dan cua so :";
	inrerchangesort(a, n);
	xuatmang(a, n);
}