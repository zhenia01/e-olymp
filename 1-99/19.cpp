#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() 
{
	string N;
	getline(cin, N);

	int result(0),
		j(0);

	if (N.size() % 2 != 0)
	{
		result++;
		for (int i(N.size()-1); i >= (N.size() / 2 + 1); i--)
		{
			if (N[i] == N[j])
				result++;
			j++;
		}
	}
	else
	{
		for (int i(N.size()-1); i >= (N.size() / 2); i--)
		{
			if (N[i] == N[j])
				result++;
			j++;
		}
	}

	cout << result << endl;

	system("pause");
	return 0;
}
