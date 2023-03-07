#include <iostream>

using namespace std;

long factorial( int n)
{
    long temp = factorial( n - 1) * n;
    return (n <= 1) ? 0 : temp;

}

int main()
{
    int n = 6;
    cout << factorial(n);
    return 0;
}
