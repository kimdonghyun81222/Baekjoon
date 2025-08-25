#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, tmp;
    vector<int> vec;

    cin >> N;
    while (N--) {
        cin >> tmp;
        vec.push_back(tmp);
    }

    sort(vec.begin(), vec.end());

    cin >> M;
    while (M--) {
        cin >> tmp;
        cout << upper_bound(vec.begin(), vec.end(), tmp) - lower_bound(vec.begin(), vec.end(), tmp) << ' ';
    }

    return 0;
}