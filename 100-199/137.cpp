#include <iostream>

using namespace std;

unsigned int NSD(int a, int b) {
	while (b != 0) {
		a %= b;
		swap(a, b);
	}
	 
	return a;
}

int main() {
	
	int N;
	cin >> N;

	int *arr = new int[N];
	
	for (int i(0); i < N; i++) {
		cin >> arr[i];
	}

	int result = NSD(arr[0], arr[1]);
	
	for (int i(2); i < N; i++) {
			result = NSD(result, arr[i]);
	}

	cout << result << endl;
	
	system("pause");
	return 0;
}
