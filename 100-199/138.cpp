#include <iostream>

using namespace std;

int main()
{
	int N, result(0);

	cin >> N;

	if (N % 10 != 0)
	{
	cout << "-1" << endl;
	return 0;
	}
	else
	{
		if (N >= 500)
		while (N >= 500)
		{
			N -= 500;
			result++;
		}
		if (N >= 200)
		while (N >= 200)
		{
			N -= 200;
			result++;
		}
		if (N >= 100)
		while (N >= 100)
		{
			N -= 100;
			result++;
		}
		if (N >= 50)
		while (N >= 50)
		{
			N -= 50;
			result++;
		}
		if (N >= 20)
		while (N >= 20)
		{
			N -= 20;
			result++;
		}
		if (N >= 10)
		while (N >= 10)
		{
			N -= 10;
			result++;
		}
	}
	
	cout << result << endl;

	return 0;
}
