#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void binary(int N, vector <int> &vec);
void dexing(int &N, vector <int> &vec);
void cycle(vector <int> &vec);

int main()
{
	int N;
	cin >> N;

	vector <int> vec;
	binary(N, vec);

	//reverse(vec.begin(), vec.end());

	int res = 0;
	size_t n = vec.size();

	for (int i(0); i <= n; i++)
	{
		cycle(vec);
		dexing(N, vec);
		res = max(res, N);
	}

	cout << res << endl;

	system("pause");
	return 0;
}

void binary(int N, vector <int> &vec)
{
	while (N > 0)
	{
		vec.push_back(N % 2);
		N /= 2;
	}
}

void dexing(int &N, vector <int> &vec)
{
	N = 0;
	
	int t = 1;

	for (size_t i = 0, n = vec.size();i<n;i++)
	{
		if (i != 0)
		{
			t *= 2;

			if (vec[i] == 1)
				N += t;
		}
		else if (vec[i] == 1)
		{
			N += 1;
		}	
	}
}

void cycle(vector <int> &vec)
{
	int first = vec[0];
	size_t n = vec.size();

	for (size_t i(0); i < n - 1; i++)
	{
		vec[i] = vec[i + 1];
	}

	vec[n - 1] = first;
}
