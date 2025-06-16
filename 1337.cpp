#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;

int main() {
    int A, B, C;
    while (true) {
        cin >> A >> B >> C;
        if (A == 0 && B == 0 && C == 0) break;
        vector<int> v = {A, B, C};
        sort(v.begin(), v.end());
        
        if (v[0] != v[1] && v[1] != v[2]) {
			v[0] = v[1] = 1;
			v[2] = 2;
        }
        else if (v[0] == v[1] && v[1] == v[2])
			v[0] = v[1] = v[2] = v[0] + 1;
        else {
        	if (v[0] == v[1]) {
        		if (v[2] == 13) {
        			v[0]++;
        			v[1]++;
        			v[2] = 1;
        		}
        		else
	        		v[2] = (v[2] + 1 != v[1]) ? v[2] + 1: v[2] + 2;
        	}
        	else {
        		if (v[1] == 13 && v[0] == 12)
        			v[0] = v[1] = v[2] = 1;
        		else
	        		v[0] = (v[0] + 1 != v[1]) ? v[0] + 1: v[0] + 2;
        	}
        }
        

        sort(v.begin(), v.end());
        if (v[0] == 14 && v[1] == 14 && v[2] == 14)
			cout << "*" << endl;
		else
			cout << v[0] << " " << v[1] << " " << v[2] << endl;
    }

    return 0;
}
