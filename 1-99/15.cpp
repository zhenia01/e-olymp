#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	const int INF = -1;

	int N, M;
	cin >> N >> M;

	vector <vector <int>> vec(N+1);

	for (int i(0); i < N; i++)
		vec[i].push_back(INF);

	for (int i(0), a; i < N; i++)
	{
		for (int j(0); j < M; j++)
		{
			cin >> a;
			vec[i].push_back(a);
		}
	}

	for (int i(0); i <= M; i++)
		vec[N].push_back(INF);

	vec[N - 1][0] = vec[N][1] = 0;

	for (int i = N - 1; i >= 0; i--)
	{
		for (int j = 1; j <= M; j++)
		{
			vec[i][j] += max(vec[i][j-1], vec[i+1][j]);
		}
	}

	//cout << vec[0][M] << endl;

	string s;

	int x(0), y(M);

	while (x != (N - 1) || y != 1)
	{
		if (vec[x][y - 1] >= vec[x + 1][y])
		{
			s = 'R' + s;
			y--;
		}
		else
		{
			s = 'F' + s;
			x++;
		}
	}

	cout << s << endl;

	system("pause");
	return 0;
}
