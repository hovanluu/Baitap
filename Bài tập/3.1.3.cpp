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
void selectionsort(int a[100], int n) {
    int min;
    int tmp;
    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) 
            if (a[j] < a[min]) 
                min = j;
                tmp = a[i];
                a[i] = a[min];
                a[min] = tmp;
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
    nhapmang(a,n);
    cout << "gia tri tang dan cua mang la : "; 
    selectionsort(a,n);
    xuatmang(a,n);
}

