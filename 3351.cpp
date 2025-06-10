#include <iostream>
#include<algorithm>

using namespace std;

struct Moment {
	long long int first, time;
};

int cmp (Moment a, Moment b) {
	long long int sum_a = a.first + a.time, sum_b = b.first + b.time;
	return sum_a < sum_b;
}

int main() {
	int N;
	long long int K;
	long long int result;
	cin >> N >> K;
	Moment vet[N];
	for (int i = 0;i < N;i++)
		cin >> vet[i].first >> vet[i].time;
	sort(vet, vet + N, cmp);

	for (int i = 0;i < N;i++)
		cout << vet[i].first << " " << vet[i].time << endl;
    return 0;
}
