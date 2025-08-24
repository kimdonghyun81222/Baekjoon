#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<vector<int>> arr1(9, vector<int>(9));
    int sum = 0;
    int a, b;

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cin >> arr1[i][j];
            if (arr1[i][j] >= sum) {
                sum = arr1[i][j];
                a = i+1, b = j+1;
            }
        }
    }

    cout << sum << endl;
    cout << a << " " << b;

    return 0;
}
