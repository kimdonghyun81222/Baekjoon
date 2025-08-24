#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a;

	cin >> a;
	
	for (int i = 0; i < a; i++) {
		int re;
		string s;
		cin >> re;
		cin >> s;

		for (int j = 0; j < s.length(); j++) {
			for (int k = 0; k < re; k++) {
				cout << s[j];
			}
		}
		cout << "\n";
	}
}