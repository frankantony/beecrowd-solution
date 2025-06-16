#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    int x = 0, numberOfHandsWithHand = 2 * N;
    vector<bool> eliminated (numberOfHandsWithHand, false);
    for (int i = numberOfHandsWithHand; i >= 2; i--) {
        int c = 0;
        while (true) {
			c += (!eliminated[x]);

			if (c == 29) {
				eliminated[x] = true;
				x = (x + 1) % numberOfHandsWithHand;			
				break;
			}
			
			x = (x + 1) % numberOfHandsWithHand;
        }
    }
    
    if (!eliminated[0] || !eliminated[1])
    	cout << "vai ganhar" << endl;
    else
    	cout << "nao vai ganhar" << endl;
    
    return 0;
}
