#include <iostream>

using namespace std;

long F(int n) {
   if (n == 0) return 0;
   if (n == 1) return 1;
   return F(n-1) + F(n-2);
}

int main()
{
    int n;
    cin >> n ;
    cout << F(n) << endl;
    return 0;
}

/* Khi tính F(n), số lần chương trình này tính F(1) chính bằng Fn.
 Lỗi tính đi tính lại này tăng lên theo cấp lũy thừa */
