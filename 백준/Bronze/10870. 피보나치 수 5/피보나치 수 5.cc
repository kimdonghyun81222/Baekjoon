#include <iostream>

using namespace std;

int arr[100];

int fibo(int num) {
    return num < 2 ? num : arr[num] ? arr[num] : arr[num] = fibo(num - 1) + fibo(num - 2);
}

int main() {
    int num;
    cin >> num;
    cout << fibo(num);
}
