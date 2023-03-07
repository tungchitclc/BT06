#include <iostream>

using namespace std;

void f(int arr[]) {
    cout << "Dia chi cua mang: " << &arr << endl;
    cout << "Dia chi phan tu dau tien: " << &arr[0] << endl;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};

    cout << "Dia chi cua mang A: " << &A << endl;
    cout << "Dia chi phan tu dau tien cua A: " << &A[0] << endl;

    f(A);

    return 0;
}
//So sánh kết quả in ra từ main và từ hàm f, ta thấy địa chỉ của biến mảng A và địa chỉ phần tử đầu tiên trong mảng đều giống nhau, và kết quả in ra từ hàm f cũng tương tự với địa chỉ phần tử đầu tiên khi ở ngoài hàm. Điều này cho thấy biến mảng và các phần tử trong mảng đều được lưu trữ liên tiếp nhau trong bộ nhớ.
