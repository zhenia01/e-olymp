#include <iostream>
using namespace std;
 
int main() {
	int N, P, Q, K, flenter, flatFloor, entrance, floor;
	cin >> N >> P >> Q >> K;
	flenter = N/P;
    flatFloor = N/P/Q;
	entrance = K/flenter; 
	if (K%flenter != 0){
		entrance++;
	}
	if (K%flenter == 0){
	    floor = Q;
	} else {
		    floor = (K%flenter)/flatFloor; 
		    if (K%flatFloor != 0){
		  	    floor++;
		    }
    }
    cout << entrance << " " << floor << endl;
	return 0;
}
