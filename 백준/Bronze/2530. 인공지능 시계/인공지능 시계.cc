#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	while (d >= 3600) {
		a += 1;
		d -= 3600;
	}
	while (d >= 60) {
		b += 1;
		d -= 60;
	}
	c += d;

	while (c >= 60) {
		b += 1;
		c -= 60;
	}
	while (b >= 60) {
		a += 1;
		b -= 60;
	}
	while (a >= 24) {
		a -= 24;
	}
	cout << a << ' ' << b << ' ' << c << endl;
}