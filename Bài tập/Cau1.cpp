#include <iostream>
#include<stdio.h>
using namespace std;
struct PHANSO {
	int tu;
	int mau;
};
void nhap(PHANSO &so) {
	int tu;
	int mau;
	cout << "Tu so la :";
	cin >> so.tu;
	cout << "Mau so la : ";
	cin >> so.mau;
}
void xuat(PHANSO so) {
	cout << so.tu << "/" << so.mau; 
}
int main()
{
	PHANSO so{};
	nhap(so);
	xuat(so);
	
}
