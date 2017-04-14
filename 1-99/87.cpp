#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	// str --> int = - '0'
	// int --> str = + '0'

	string s;
	getline(cin, s);

	int n = s.size();

	string res(2*n+3, '0');

	int j((2 * n + 3) / 2);
	res[j] = '1';

	for (int i(0); i < n; i++)
	{
		if (s[i] == 'R')
		{
			j++;
			res[j] = '1';
		}
		else if (s[i] == 'L')
		{
			j--;
			res[j] = '1';
		}
	}

	int ans = count(res.begin(), res.end(), '1');
	cout << ans << endl;

	system("pause");
	return 0;
}
