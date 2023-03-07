#include<iostream>
using namespace std;
struct honso {
	int songuyen;
	int tuso;
	int mauso;
};
void nhaphonso(honso& hs) {
	cout << "nhap hon so : " << endl; 
	cin >> hs.songuyen ;
	cout << "nhap tu so : " << endl;
	cin >> hs.tuso;
	cout << "nhap mau so : " << endl;
	cin >> hs.mauso;
}
void xuathonso(honso hs) {
	cout << hs.songuyen <<"+" << hs.tuso << "/" << hs.mauso << endl;
}
int main() {
	honso hs{};
	nhaphonso(hs);
	xuathonso(hs);
}
