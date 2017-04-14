#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int R;
    cin >> R;

    int result(0);

    for (int i(1);i<R;i++)
        result += (int)sqrt(R*R - i*i);

    cout << (result*4) << endl;

  return 0;
}
