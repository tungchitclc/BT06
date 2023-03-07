#include <iostream>

using namespace std;

double H(int N)
{
    if( N == 1) return 1.0;
    return H(N) + 1.0/N;
}

int main()
{
    int n;
    cin >> n;
    cout << H(n);
    return 0;
}
/* Nhận xét : Lỗi không đảm bảo hội tụ.
Nó sẽ lặp vô tận nếu nó được gọi với một tham số khác 1*/
