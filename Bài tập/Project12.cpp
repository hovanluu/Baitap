#include<iostream>
using namespace std;
struct toado {
	float x;
	float y;
	float z;
};
void nhaptoado(toado &d) {
	cout << "Hoanh do la : ";
	cin >> d.x;
	cout << "Tung do la : ";
	cin >> d.y;
	cout << "cao do la : ";
	cin >> d.z;
}
void xuattoado(toado d) {
	cout << "(" << d.x << ";" << d.y << ";" << d.z << ")" << endl;
}
int main() {
	toado(d);
	nhaptoado(d);
	xuattoado(d);
}