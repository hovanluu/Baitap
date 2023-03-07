#include<iostream>
using namespace std;
struct diemOxy {
	float x;
	float y;
};
void nhaptoado(diemOxy& d) {
	cout << "nhap toa do x :";
	cin >> d.x;
	cout << "nhap toa do y :";
	cin >> d.y;
}
void xuattoado(diemOxy d) {
	cout << "Toa do x la :" << d.x << endl;
	cout << "toa do y la :" << d.y << endl;
}
int main() {
	diemOxy d{};
	nhaptoado(d);
	xuattoado(d);
}