#include <iostream>
#include <stdio.h>
using namespace std;

struct THANHPHO {
	int MATP;
	char TenTP[30];
	float Dientich;
};
void nhapTHANHPHO(THANHPHO &tp){
	cout << "Nhap ma thanh pho : ";
	cin >> tp.MATP;
	cout << "Nhap ten thanh pho : ";
	cin >> tp.TenTP;
	cout << "Dien tich :";
	cin >> tp.Dientich;
}
void xuatTHANHPHO(THANHPHO tp) {
	cout << tp.MATP << endl;
	cout << tp.TenTP << endl;
	cout << tp.Dientich << endl;
}
int main()
{
	THANHPHO tp{};
	nhapTHANHPHO(tp);
	xuatTHANHPHO(tp);

}