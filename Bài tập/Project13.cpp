#include<iostream>
using namespace std;
struct donthuc {
	int a;
	int x;
	int n;
};
void nhapdonthuc(donthuc& dt) {
	cout << "a la : ";
	cin >> dt.a;
	cout << "x la :";
	cin >> dt.x;
	cout << "n la : ";
	cin >> dt.n;
}
void xuatdonthuc(donthuc dt) {
	cout << "P(x)=" << dt.a << "*" << dt.x << "^" << dt.n << endl;

}
int main() {
	donthuc(dt);
	nhapdonthuc(dt);
	xuatdonthuc(dt);
}