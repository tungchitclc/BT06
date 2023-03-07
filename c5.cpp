#include<iostream>
using namespace std;

void printSequence(int startNum, int num, string output)
{
    if (num == 0) {
        cout << output << endl;
        return;
    }
    for (int i = num; i >= startNum; --i)
    {
        printSequence(i, num - i, output + " " + to_string(i));
    }
}

int main()
{
    int num;
    cout << "Nhap vao mot so nguyen duong: ";
    cin >> num;
    cout << "Cac day so nguyen duong co tong bang " << num << " la: " << endl;
    printSequence(1, num, "");
    return 0;
}
