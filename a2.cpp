#include <iostream>

using namespace std;

double H(int N) {
   return H(N-1) + 1.0/N;
}

int main()
{
    int n;
    cin >> n ;
    cout << H(n) << endl;
    return 0;
}

/*Nhận xét: Khi bạn gọi hàm này nó sẽ gọi đi gọi lại chính nó
và không bao giờ trả về*/
