#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	string str;
	int N;
	int size = 0;
	string res;

	cin >> N;

	for (int i = 0; i < N; i++) {

		stack<char> s;
		res = "YES";

		cin >> str;
		size = str.size();

		for (int i = 0; i < size; i++) {
			if (str[i] == '(') {
				s.push(str[i]);
			}

			else if (str[i] == ')') {
				if (!s.empty()) {
					s.pop();
				}
				else {
					res = "NO";
				}
			}
		}

		if (!s.empty()) {
			res = "NO";
		}

		cout << res << endl;

	}

	return 0;
}

