#include <iostream>

using namespace std;

double H (int N)
{
    if( N == 1 )  return 0.0;
    return H( N - 1) + 1.0/N;
}

int main()
{
   int n = 5500;
   cout << H(n) << endl;
    return 0;
}
// khi đtạ giá trị 5000 chương trình sẽ gây lỗi StackoverflowError

