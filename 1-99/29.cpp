#include <iostream>

using namespace std;

typedef  unsigned long long ull;

ull mirror(ull x)
{
	ull y = 0;
	
	while (x)
	{
		y = y * 10 + x % 10;
		x /= 10;
	}
	
	return y;
}

int main()
{
	ull N;
	cin >> N;

	ull N_mirror(mirror(N)),count(0);

	while (N != N_mirror)
	{
		if (N != N_mirror)
			N += N_mirror;
		N_mirror = mirror(N);
		count++;
	}

	cout << count << endl;

	system("pause");
	return 0;
}
