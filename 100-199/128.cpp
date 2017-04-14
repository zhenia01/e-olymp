#include <iostream>
using namespace std;
int main() 
{
  int N, c = 0;
  cin >> N;
  for ( int i = 0; i < 10; i++ )
     for ( int j = 0; j < 10; j++ )
        if ( N - i - j >= 0 && N - i - j < 10 )
        c++;
  
  cout << c*c;
  return 0;
}
