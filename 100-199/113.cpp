#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int mas[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

    int N;
    cin >> N;

    int pr;

    for (int i(0);i<N;i++)
    {
        cin >> pr;
        mas[pr-1]++;
    }

    sort(mas,mas+9);

    cout << (N - mas[8]) << endl;

    return 0;
}
