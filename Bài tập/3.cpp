#include <iostream>
using namespace std;

int sumOfEven(int arr[], int n) {
    if (n == 0) { // Trường hợp cơ sở là kích thước mảng là 0
        return 0;
    }
    else {
        int sum = sumOfEven(arr, n - 1); // Gọi lại hàm tính tổng đệ quy với mảng nhỏ hơn
        if (arr[n - 1] % 2 == 0) { // Nếu phần tử hiện tại là số chẵn
            sum += arr[n - 1]; // Thêm giá trị của phần tử vào tổng
        }
        return sum;
    }
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = sumOfEven(arr, n);
    cout << "Tong cac so chan trong mang la: " << sum << endl;
    return 0;
}