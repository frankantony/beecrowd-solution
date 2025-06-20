#include <iostream>
#include <vector>
 
using namespace std;

int main() {
    string N;
    cin >> N;
    vector<string> v = {"zero", "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove"};
    int len = N.size();
    if (len == 1)
        cout << v[N[0] - '0'] << endl;
    else {
        for (int i = 0; i <= 9; i++)
        	if (v[i] == N)
        		cout << i << endl;
    }
        
    return 0;
}
