#include<iostream>
using namespace std;
 
int main ()
{
    int N, price;
    cin >> N;
    if (N % 100 > 65)
        price += (N / 100 + 1) * 100;
    else
    {
        int a = N % 100;
        price += (N/100) * 100;
        if (a % 20 > 15)
            price += (a / 20 + 1) * 30;
        else
        {
            int b = (a % 20);
            price += (a / 20) * 30;
            price += b*2;
        }
    }
    cout << price;
    return 0;
}
