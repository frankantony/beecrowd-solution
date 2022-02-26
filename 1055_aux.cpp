#include <bits/stdc++.h>

using namespace std;

int cmp(const void* a, const void* b)
{
    return (*(int *) a - (*(int *) b));
}
int main()
{
    int v[60];
    int v2[60];
    int n;
    int cases;
    int k;
    int ans;
    int teste = 1;    
//	while(true) {
	    cin >> cases;
//		cout << "valor: " << (cases & 1) << "\n";
//	}
    while(cases--)
    {
        cin >> n;
        for (int i = 0 ; i < n ; i++)
            cin >> v[i];
        qsort(v, n, sizeof(int), cmp);
        for (int i = 0 ; i < n ; i++)
            cout << v[i] << " ";
		cout << endl;
        ans = 0;
        k = 0;
        for (int i = n / 2 + (n & 1), j = n - 1; i >= 0; i--, j--, k++)
        {
			cout << "Atribui v2[" << i << "], o valor v[" << i << "]\n";
            v2[i] = v[i];
            k++;
			cout << "Atribui v2[" << (i+k) << "], o valor v[" << j << "]\n";
            v2[i + k] = v[j];
        }
		for (int i = 0;i < n;i++)
			cout << v2[i] << " ";
		cout << "\n";

        for (int i = 0; i < n - 1; i++)
        {
//            cout << "Fazendo " << v2[i] << " com " << v2[ i + 1] << 'n';
            ans+= abs(v2[i] - v2[i + 1]);
        }
        cout << "Case " << teste << ": " << ans << '\n';
        teste++;
        
    }
}

