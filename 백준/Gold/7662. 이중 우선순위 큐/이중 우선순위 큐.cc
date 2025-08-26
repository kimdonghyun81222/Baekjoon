#include <iostream>
#include <set>

using namespace std;

multiset<int> ms;

void insert(int n) {
    ms.insert(n);
}

void delmin() {
    if (!ms.empty()) {
        ms.erase(ms.begin());
    }
}

void delmax() {
    if (!ms.empty()) {
        auto it = ms.end();
        --it;
        ms.erase(it);
    }
}

int main() {
    int T, k, n;
    char ch;

    cin >> T;
    while (T--) {
        ms.clear();

        cin >> k;
        for (int i = 0; i < k; i++) {
            cin >> ch >> n;

            if (ch == 'I') {
                insert(n);
            }
            else {
                if (ms.empty()) continue;
                if (n == 1) delmax();
                else delmin();
            }
        }

        if (ms.empty()) {
            cout << "EMPTY" << endl;
        }
        else {
            auto max_it = ms.end();
            --max_it;
            cout << *max_it << " " << *ms.begin() << endl;
        }
    }

    return 0;
}