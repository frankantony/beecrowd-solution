#include<iostream>
#include<string>

using namespace std;

int verify (string a, string b) {
	int len = a.size(), count_different = 0;
	for (int i = 0; i < len; i++) {
		if (a[i] != b[i])
			count_different++;
	}
	if (count_different == len)
		return 1;
	else if (count_different == 0)
		return 0;
	return -1;
}

int main() {
	int N;
	cin >> N;
	string a, b;
	cin >> a >> b;
	int result = verify (a, b);
	if (result == -1)
		cout << "Deletion failed";
	else if (result == (N % 2))
		cout << "Deletion succeeded";
	else
		cout << "Deletion failed";
	cout << endl;
    return 0;
}
