#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a, b;
	int n;

	cin >> a >> b >> n;

	cout << fixed << setprecision(n) << a / b;

	return 0;
}
