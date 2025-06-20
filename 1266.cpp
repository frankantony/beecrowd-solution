#include<iostream>

using namespace std;

int main() {
	int N;
	while (true) {
		cin >> N;
		if (N == 0)
			break;
		
		int  X[N];
		for (int i = 0; i < N; i++)
			cin >> X[i];
		
		int firstConcretPost = 0;
		while (firstConcretPost < N && X[firstConcretPost] == 0)
			firstConcretPost++;

		int c = 0, result = 0;
		for (int i = firstConcretPost; i < N; i++) {
			if (X[i] == 0)
				c++;
			else {
				result += (c / 2);
				c = 0;
			}
		}
		
		result += (firstConcretPost + c) / 2 + (firstConcretPost == N && N % 2 != 0);
		
		cout << result << endl;
	}
    return 0;
}
