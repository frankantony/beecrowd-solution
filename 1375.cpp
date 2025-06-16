#include <iostream>
#include <vector>

using namespace std;
 
int main() {
    int N, C, P;
    while (true) {
		cin >> N;
		if (N == 0) break;
		vector<int> result(N, 0);
    	bool isPossible = true;
		for (int i = 0; i < N; i++) {
		    cin >> C >> P;
		    if (i + P >= 0 && i + P < N && result[i + P] == 0)
		        result[i + P] = C;
		    else
		        isPossible = false;
		}
		
		if (isPossible) {
		    cout << result[0];
		    for (int i = 1; i < N; i++)
		        cout << " " << result[i];
		    cout << endl;
		}
		else
		    cout << -1 << endl;
	}
    return 0;
}
