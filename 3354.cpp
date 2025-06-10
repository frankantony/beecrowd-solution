#include <iostream>
#include<algorithm>

#define mod 1300031

using namespace std;

int main() {
	int N, cont = 0;
	long long int I, F;
	while(true) {
		cin >> I >> F >> N;
		if (I == 0 && F == 0 && N == 0)
			break;
		long long int vet[N];
		for (int i = 0;i < N;i++)
			cin >> vet[i];
		sort(vet, vet + N);

		long long int result = 0;
		for (long long int v = I; v <= F; v++) {
			for (int i = 0; i < N; i++) {
				if (v % vet[i] == 0) {
					result += v;
					if (result >= mod)
						result %= mod;
					i = N;
				}
			}
		}
		cout << result << endl;
	}
    return 0;
}
