#include<iostream>
#include<queue>

using namespace std;

int n, x;
string s;
queue <int> q;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> s; // push

		if (s == "push")
		{
			cin >> x; // 3 
			q.push(x);
		}

		else if (s == "pop")
		{
			if (!q.empty())
			{
				cout << q.front() << '\n';
				q.pop();
			}
			else
				cout << -1 << '\n';
		}

		else if (s == "front")
		{
			if (!q.empty())
				cout << q.front() << '\n';
			else
				cout << -1 << '\n';
		}

		else if (s == "empty")
		{
			cout << q.empty() << '\n';
		}

		else if (s == "size")
		{
			cout << q.size() << '\n';
		}

		else // s == "back" 일때
		{
			if (!q.empty())
				cout << q.back() << '\n';
			else
				cout << -1 << '\n';
		}
	}

}