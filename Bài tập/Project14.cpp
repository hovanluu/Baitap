#include <iostream>
using namespace std;

int tongsoduong(int arr[], int n) {
   if (n == 0) { 
      return 0;
   }
   else {
      int tong = tongsoduong(arr, n-1); 
      if (arr[n-1] % 2 == 0) { 
         tong += arr[n-1]; 
      }
      return tong;
   }
}

int main() {
   int arr[] = {1, 2, 3, 4, 5, 6,7,8};
   int n = sizeof(arr) / sizeof(arr[0]);
   int tong = tongsoduong(arr, n);
   cout << "Tong cac so chan trong mang la: " << tong<< endl;
   return 0;
}