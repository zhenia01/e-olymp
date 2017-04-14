#include <iostream>

using namespace std;

int main()
{
	int N, result(0);

	cin >> N;
	int sum(0), count(0);

	while (N > 0)
	{
		int n(N);
		while (n > 0)
		{
			sum += n % 10;
			n /= 10;
		}
		N -= sum;
		sum = 0;
		count++;
	}

	cout << count << endl;

	return 0;
}
