#include <iostream>
using namespace std;
 
int main() {
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    if (s2 < s1) {
         s2 += 60;
         m2 -= 1;
    }
    if (m2 < m1) {
         m2 += 60;
         h2 -= 1;
    }
    cout << h2 - h1 << " " << m2 - m1 << " " << s2 - s1;
    return 0;
}
