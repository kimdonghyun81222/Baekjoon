#include <iostream>

using namespace std;

long fact(int num)
{
	if (num <= 1)
		return 1;
	else
		return num * fact(num - 1);
}

int main()
{
	int num;
	cin >> num;

	cout << fact(num);

	return 0;
}