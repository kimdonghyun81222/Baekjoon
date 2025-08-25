#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string order, nums, num;
    int t, numsize;
    bool isError = false, isReverse = false;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        isError = isReverse = false;
        deque<int> deq;
        cin >> order >> numsize >> nums;

        num = "";
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] >= '0' && nums[j] <= '9') {
                num += nums[j];
            }
            else if (nums[j] == ',' || nums[j] == ']') {
                if (!num.empty()) {
                    deq.push_back(stoi(num));
                    num = "";
                }
            }
        }

        for (int j = 0; j < order.size(); j++) {
            if (order[j] == 'R') {

                isReverse = !isReverse;
            }
            else if (order[j] == 'D') {
                if (deq.empty()) {
                    isError = true;
                    break;
                }

                if (isReverse) {
                    deq.pop_back();
                }
                else {
                    deq.pop_front();
                }
            }
        }

        if (isError) {
            cout << "error" << endl;
        }
        else {
            cout << "[";

            if (!deq.empty()) {
                if (isReverse) {
                    for (int j = deq.size() - 1; j >= 0; j--) {
                        cout << deq[j];
                        if (j > 0) cout << ",";
                    }
                }
                else {
                    for (int j = 0; j < deq.size(); j++) {
                        cout << deq[j];
                        if (j < deq.size() - 1) cout << ",";
                    }
                }
            }

            cout << "]" << endl;
        }
    }

    return 0;
}