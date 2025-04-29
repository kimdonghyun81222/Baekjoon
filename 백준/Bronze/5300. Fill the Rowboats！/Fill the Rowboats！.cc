#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0)
#define ll long long

int main() {
    fast;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
        if (i % 6 == 0 || i == n) cout << "Go! ";
    }
}