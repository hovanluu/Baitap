#include <iostream>
using namespace std;

int demsonguyenduong(int arr[], int n) {
    if (n == 0) {
        return 0;
    }
    else {
        int dem = demsonguyenduong(arr, n - 1);
        if (arr[n - 1]  > 0) {
            dem++;
        }
        return dem;
    }
}

int main() {
    int arr[] = {-1,-2,0, 1, 2, 3, 4, 5, 6,7,8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int dem = demsonguyenduong(arr, n);
    cout << "dem so nguyen duong trong mang: " << dem << endl;
    return 0;
}