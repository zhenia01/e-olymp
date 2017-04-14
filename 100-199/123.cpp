#include <iostream>

using namespace std;

int main() 
{
	long long s, sum(1), k(1), N(1);
	
	cin >> s;
	
	while (sum < s)
	{
		N++;		
		k = k * 2 + N;
		sum += k;
	}
	
	cout << N << endl;

	return 0;
}
