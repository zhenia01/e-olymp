#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector <int> vec(2);
	vec[0] = 2; vec[1] = 4;

	for (int i(2); i <= N; i++)
		vec[i % 2] = vec[0] + vec[1];

	//cout << vec[0] << ' ' << vec[1] << endl;
	cout << ((N % 2 == 1) ? vec[0] : vec[1]) << endl;

	system("pause");
    return 0;
}
