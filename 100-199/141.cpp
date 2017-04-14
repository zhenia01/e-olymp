#include <iostream>

using namespace std;

int Sum(int N)
{
	int sum(0);
	while (N > 0)
	{
		sum += N % 10;
		N /= 10;
	}
	return sum;
}

int main() 
{
	int start, end, result(0);

	cin >> start >> end;
	int Min(Sum(start));

	for (int i(start); i <= end; i++)
	{
		if (Min > Sum(i))
		{
			Min = Sum(i);
			continue;
		}
		if (Min == Sum(i))
		{
			result++;
		}

	}

	cout << result << endl;

	return 0;
}
