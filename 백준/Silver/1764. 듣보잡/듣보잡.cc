#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<string, int> mp;
    vector<string> vt;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n + m; i++) {
        string str;
        cin >> str;
        mp[str]++;
        if (mp[str] > 1)
            vt.push_back(str);
    }

    sort(vt.begin(), vt.end());

    cout << vt.size() << '\n';

    for (auto o : vt)
        cout << o << '\n';

}