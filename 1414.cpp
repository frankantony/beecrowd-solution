#include <iostream>

using namespace std; 

int main() {
    int T ,N;
    while (true) {
        cin >> T >> N;
        if (T == 0) break;
        string name;
        int points;
        int sumPoints = 0, aux = T;
        while (aux != 0) {
            cin >> name >> points;
            sumPoints += points;
            aux--;
        }
        
        cout << 3 * N - sumPoints << endl;
    }
    
 
    return 0;
}
