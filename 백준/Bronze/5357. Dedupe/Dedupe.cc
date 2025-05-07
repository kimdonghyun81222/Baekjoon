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
    string s;
    cin >> n;
    while (n--) {
        char prev = ' ';
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (prev != s[i]) {
                cout << s[i];
                prev = s[i];
            }
        }
        cout << "\n";
    }
}