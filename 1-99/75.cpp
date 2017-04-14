#include <iostream>

using namespace std;

int main(){
	
	short  a, m, result(0);
	cin >> a >> m;

	do {
		m -= a;
		a++;
		result++;
	} while (a+a != m);

	cout << result+1 << endl;

	system("pause");
	return 0;
}
