#include <cstdio>
#include <vector>

using namespace std;

int ultimo_a_desligar (int n, int m)
{
	int p = 0;
	vector<int> v;
	for (int i = 1; i <= n; i++)
		v.push_back(i);
	while(v.size() > 1) {
		v.erase(v.begin() + p);
		p = (p - 1 + m) % v.size();
	}

 return v[0];
}

int main()
{
 int n, m;

 while(1)
 {
	scanf("%d",&n);
	if (n == 0) break;
	m = 1;
	while(1) {
		if (ultimo_a_desligar(n,m) == 13){
			printf("%d\n", m);
			break;
		}
		m++;
	}

 }

 return 0;
}


