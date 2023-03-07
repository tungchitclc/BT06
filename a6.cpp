#include <iostream>
using namespace std;

int factorial(int n) {
    int arr[1000000]; //khởi tạo mảng kích thước lớn
    if (n == 1) {
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}

int main() {
    int n;
    cin >> n;
    int result = factorial(n);
    cout << "Giai thua cua " << n << " la: " << result << endl;
    return 0;
}

// Nhận xét: khi nhập giá trị n = 1 xảy ra lỗi tràn bộ nhớ
