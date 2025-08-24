#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    map<int, string> intTostr = map<int, string>();
    map<string, int> strToint = map<string, int>();

    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
    {
        string name;
        cin >> name;
        intTostr[i] = name;
        strToint[name] = i;
    }

    for (int i = 0; i < m; ++i)
    {
        string str;
        cin >> str;

        if (isdigit(str[0]))
        {
            int num = stoi(str);
            cout << intTostr[num] << '\n';
        }
        else
            cout << strToint[str] << '\n';
    }
}