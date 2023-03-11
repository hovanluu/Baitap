#include <iostream>
#include <cassert>
using namespace std;
void nhapmang(int a[100], int& n) {
    do {
        cout << "gia tri thu " << n + 1 << " cua mang la : ";
        cin >> a[n];
        n++;
    } while (a[n - 1] != 0);
}
void Insertionsort(int a[100], int n) {
    int pos, i;
    int x;
    for (int i = 1; i < n; i++) {
        x = a[i]; pos = i - 1;
        while ((pos >= 0) && (a[pos] > x)){
        a[pos + 1] = a[pos];
        pos--;
        }
        a[pos + 1] = x;
    }
}
void xuatmang(int a[100], int n) {
    int i;
    for (short i = 0; i < n; i++)
        cout << a[i] << " ";
}
int main()
{
    int a[100];
    int n = 0;
    nhapmang(a, n);
    cout << "gia tri tang dan cua mang la : ";
    Insertionsort(a, n);
    xuatmang(a, n);
}

